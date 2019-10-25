#include <Servo.h>

Servo test;

void setup() {
  test.attach(9);

}

void loop() {
  for(int i=0;i<=180;i++)
  {
    test.write(i);
    delay(100); } 

  for(int j=180;j>=0;j--)
  {
    test.write(j);
    delay(100);}
 }
