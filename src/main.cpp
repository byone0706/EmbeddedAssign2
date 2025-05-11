#include <Arduino.h>

// put function declarations here:

int led1=13,led2=17,led3=16,led4=4,led5=2,led6=15;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  char c=Serial.read();
  if (c=='1')
  {
    digitalWrite(led1,HIGH);
    Serial.print("LED1 light");
  }
  else if (c=='2')
  {
    digitalWrite(led2,HIGH);
    Serial.print("LED2 light");
  }
  else if (c=='3')
  {
    digitalWrite(led3,HIGH);
    Serial.print("LED3 light");
  }
  else if (c=='4')
  {
    digitalWrite(led4,HIGH);
    Serial.print("LED4 light");
  }
  else if (c=='5')
  {
    digitalWrite(led5,HIGH);
    Serial.print("LED5 light");
  }
  else if (c=='6')
  {
    digitalWrite(led6,HIGH);
    Serial.print("LED6 light");
  }
}

// put function definitions here:
