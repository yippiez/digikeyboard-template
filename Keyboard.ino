#define LAYOUT_YOURLANGUAGE
#include "DigiKeyboard.h"

void Type(unsigned char key, int delay_time = 300){
  DigiKeyboard.sendKeyStroke(key);
  DigiKeyboard.delay(delay_time); 
}
void Type(const char key[], int delay_time = 300){ 
  DigiKeyboard.println(key);
  DigiKeyboard.delay(delay_time); 
}

void setup() { 
  DigiKeyboard.delay(3000);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  // Your code here
}
