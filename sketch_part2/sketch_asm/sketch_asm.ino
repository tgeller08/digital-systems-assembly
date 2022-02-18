#include "sumval.h"
#include "diffval.h"

void setup() {
  // put your setup code here, to run once
  Serial.begin(9600);
  Serial.print("The sum of 3 and 4 is: ");
  Serial.println(sumval(3, 4));
 
  
  pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (13, HIGH);
  delay(400);
  digitalWrite (13, LOW);
  delay(400);
}
