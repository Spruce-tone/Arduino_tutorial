#include <Arduino.h>
#line 1 "c:\\Users\\Yongjae\\Spruce Dropbox\\Jo Yongjae\\Notebook\\programming\\arduino\\practice\\blink\\blink.ino"

#line 2 "c:\\Users\\Yongjae\\Spruce Dropbox\\Jo Yongjae\\Notebook\\programming\\arduino\\practice\\blink\\blink.ino"
void setup();
#line 6 "c:\\Users\\Yongjae\\Spruce Dropbox\\Jo Yongjae\\Notebook\\programming\\arduino\\practice\\blink\\blink.ino"
void loop();
#line 2 "c:\\Users\\Yongjae\\Spruce Dropbox\\Jo Yongjae\\Notebook\\programming\\arduino\\practice\\blink\\blink.ino"
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

