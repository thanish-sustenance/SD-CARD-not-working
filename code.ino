#include "SD.h"

void setup() {
  Serial.begin(9600);
  if(!SD.begin()) Serial.println("Card Mount Failed");
  else Serial.println("success");
}

void loop() {}
