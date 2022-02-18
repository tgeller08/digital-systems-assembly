#include "testasm.h"

void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
  Serial.print("The sum of 3 and 4 is: ");
  Serial.println(testasm(3, 4));
  
  Serial.print("The sum of 251 and 251 is: ");
  Serial.println(testasm(251, 251));

  Serial.print("The sum of 254 and 251 is: ");
  Serial.println(testasm(254, 251));

  Serial.print("The sum of 255 and 255 is: ");
  Serial.println(testasm(255, 255));
  
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (13, HIGH);
  delay(400);
  digitalWrite (13, LOW);
  delay(400);
}
