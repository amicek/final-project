#include <Servo.h>

Servo myservo1;
Servo myservo2;
#define sensorIR A0              
float sensorValue, inches, cm;

int pos = 0;
const int servoPower = 2;

void setup()
{
  myservo1.attach(10);
  myservo2.attach(11);
  pinMode(servoPower, OUTPUT);

  Serial.begin(9600);
}
void loop(){
  digitalWrite(servoPower, HIGH);  
  myservo1.write(0);
  myservo2.write(0);
  delay(1);
  for (pos = 0; pos <= 180; pos += 1)
  { // in steps of 1 degree
    myservo1.write(pos);
    delay(1);
    digitalWrite(servoPower, LOW);
    delay(3);
    sensorValue = analogRead(sensorIR);
    digitalWrite(servoPower, HIGH);
    inches = 4192.936 * pow(sensorValue, -0.935) - 3.937;
    //cm = 10650.08 * pow(sensorValue,-0.935) - 10;
//    Serial.println(inches);
    cm = inches * 2.54;

    Serial.print(pos);
    Serial.print(",");
    Serial.println(cm);

    delay(1);
  }
  delay(5);
  for (pos = 0; pos <= 180; pos += 1) {
    myservo2.write(pos);
    delay(1);
    digitalWrite(servoPower, LOW);
    delay(1);
    sensorValue = analogRead(sensorIR);
    digitalWrite(servoPower, HIGH);
    inches = 4192.936 * pow(sensorValue, -0.935) - 3.937;
    //cm = 10650.08 * pow(sensorValue,-0.935) - 10;
    delay(5);
    //  Serial.println(inches);
    cm = inches * 2.54;
    Serial.print(180 + pos);
    Serial.print(",");
    Serial.println(cm);
    delay(1);
  }
  delay(5);
}

