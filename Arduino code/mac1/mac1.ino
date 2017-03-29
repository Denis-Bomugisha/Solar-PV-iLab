#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 

int a,b,c,d; 
int mov=0;
int r;
void setup() 
{ 
  myservo.attach(11);  // attaches the servo on pin 11 to the servo object 
  
   pinMode(1, INPUT);
    pinMode(2, INPUT);
     pinMode(3, INPUT);
     pinMode(4, INPUT);
     
} 

void loop() 
{ 
  int btnx = digitalRead(1);
  int btny = digitalRead(2);
  int btnz = digitalRead(3);
  int btnh = digitalRead(4);
  
  if(btnx==LOW) 
 {a = 0;}
 else {a = 1;}
  
   if(btny==LOW) 
 {b = 0;}
 else {b = 1;}

  if(btnz==LOW) 
 {c = 0;}
 else {c = 1;}

  if(btnh==LOW) 
 {d = 0;}
 else {d = 1;} 
 
 Movement(a,b,c,d);
}
