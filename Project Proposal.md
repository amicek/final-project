Aleksandra Micek
#Measuring Robot for Interior Designers

##Summary
	One of the steps interior designers have to take in their design practice is to collect the dimensions of the walls in the existing space. Accurate measuring is crucial for the successful design and lack of mistakes in the further process. From my experience the process of collecting dimensions takes a lot of time and is not liked by interior designers because in those places there is a lot of dust, sometimes they forget about some dimensions so visiting this place later again is necessary. Collected dimensions are drawn on the piece of paper and later put manually into autocad drawing.
	The goal for my project is to build a robot that will help interior designers in collecting dimensions of walls in the empty room and automatically put those into vector drawing. I will use Arduino hardware with Arduino and Processing software to collect the data and turn it into the drawing by exploring the mathematical theories. The goal for the first version is to make the static robot that will collect the dimensions from the middle of the room and turn it into processing drawing. 

##Component Parts
	I will use Arduino Uno, IR distance sensor, servo motor, Processing software, breadboard and jumper wires. All components will be bought, some of them I will borrow from the hybrid lab. F


##Challenges
	The most hard parts will be building the robot out of all components and writing the code in Arduino software that will collect data from all sensors and turn them into valuable numbers. The most challenging part in the Processing code will be turning the physical dimensions from the distance sensor into 2d floor plan drawing by implementing mathematical theories. This part can be the most time-consuming.

##Project Timeline (5 weeks)
1. I will build the prototype of static robot with working distance sensor and motor connected to the Arduino. I will write the code in the Arduino software that collects the distance from the ultrasonic sensor as the motor moves and turn them into valuable numbers.
2. I will write the working code in Processing that draws the room out of collected numbers from the Arduino file.
3. I will test the robot in different spaces to find the mistakes and eliminate them in Arduino and Processing code. 
4. I will find better working distance sensor and adjust the codes to it.
5. I will test working in different spaces and make additional changes needed. 
