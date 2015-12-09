import processing.serial.*;

Serial port;
int servo = 0;
int dist = 0;

void setup() {
  size(1000, 1000);
  background(255);
  port = new Serial(this, Serial.list()[Serial.list().length-1], 9600);
}

void draw() {
  int[] values = readSerial(2);
  if (values != null) {
    println(values[0] + "," + values[1]);
    line(width/2,height/2,
          (width/2-values[1]*sin(values[0] * TWO_PI / 360.0)*5),
          (height/2-values[1]*cos(values[0] * TWO_PI / 360.0)*5));
  }
}

int[] readSerial(int minValues) {  

  String s = port.readStringUntil('\n');
  if (s != null) {
    String[] parts = s.substring(0, s.length()-2).split(",");
    int[] values = new int[parts.length];
    for (int i = 0; i < parts.length; i++) {
      values[i] = int(parts[i]);
    }
    if (values.length < minValues) {
      return null;
    } else {
      return values;
    }
  } else {
    return null;
  }
}
