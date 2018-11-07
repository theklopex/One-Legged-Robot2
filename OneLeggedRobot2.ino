#include <Servo.h> 
 
Servo hip;   // create servo object to control a servo 
             // a maximum of eight servo objects can be created 
Servo knee;  // create servo object to control a servo 

void setup() {
  Serial.begin(9600);
  Serial.println("\n\n\nThe one legged robot wants to walk!");

  hip.attach(8);  // attaches the servo on pin 8 to the servo object 
  knee.attach(9);  // attaches the servo on pin 9 to the servo object 
}

int wait = 1000;

void loop()
{
  // straight leg
  hip.write(90);
  knee.write(0);
  delay(wait);

  // bend knee
  hip.write(100);
  knee.write(110);
  delay(wait);

  // raise hip
  hip.write(180);
  delay(wait);

  // straighten knee
  knee.write(0);
  delay(wait);

//  delay(1000);
}
