// Include servo library
#include <Servo.h> 

// Creating servo objects
// left and right is with respect to looking at the robot from the back
Servo leftAnkle;
Servo rightAnkle;
Servo leftHip;
Servo rightHip;
Servo leftShoulder;
Servo rightShoulder;

// Assigning Digital Pins to LEDs
// If not using LEDs you can delete the next two lines of code
int rightEye = 12; //attaches LED to digital pin 12
int leftEye = 7; //attaches LED to digital pin 7

// Setting neutral position values for each motor
// neutral position is with feet flat pointing straight outwards
// with hips also straight and with both hands pointing down
// change the value below so that your robot is in neutral position
int leftAnklePos = 100;  
int rightAnklePos = 120;
int leftHipPos = 95;
int rightHipPos = 120;
int leftShoulderPos = 40;
int rightShoulderPos = 150;

//Other Variables
int forDelay = 10; //delay of movement of each single motor
int delayOne = 10; //transistion delay from one motor to the next
boolean firstTime = true;           

//Function prototypes 
void centerPosition();
void ledBlink();
void forward();
void DANCE();
