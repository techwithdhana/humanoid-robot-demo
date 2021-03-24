
#include <Servo.h>
Servo head;
Servo rh1;
Servo rh2;
Servo rh3;
Servo rl1;
Servo rl2;
Servo rl3;
Servo rl4;
Servo rl5;
Servo lh1;
Servo lh2;
Servo lh3;
Servo ll1;
Servo ll2;
Servo ll3;
Servo ll4;
Servo ll5;

void setup() {
  Serial.begin(9600);
  Serial.println("GPIO test!");

  head.attach(28);
  rh1.attach(30);
  rh2.attach(31);
  rh3.attach(32);
  rl1.attach(33);
  rl2.attach(34);
  rl3.attach(35);
  rl4.attach(36);
  rl5.attach(37);
  lh1.attach(38);
  lh2.attach(39);
  lh3.attach(40);
  ll1.attach(41);
  ll2.attach(42);
  ll3.attach(43);
  ll4.attach(44);
  ll5.attach(45);
  
  initial_position();

}

void loop() {
  
  
}

void initial_position() {
  head.write(90);
  rh1.write(0);
  rh2.write(0);
  rh3.write(20);
  rl1.write(90);
  rl2.write(150);
  rl3.write(30);
  rl4.write(30);
  rl5.write(90);

  lh1.write(180);
  lh2.write(180);
  lh3.write(160);
  ll1.write(90);
  ll2.write(30);
  ll3.write(150);
  ll4.write(150);
  ll5.write(90);
}
