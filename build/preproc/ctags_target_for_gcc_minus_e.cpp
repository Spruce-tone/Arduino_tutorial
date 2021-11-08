# 1 "c:\\Users\\Yongjae\\Spruce Dropbox\\Jo Yongjae\\Notebook\\programming\\arduino\\practice\\blink\\blink.ino"

void setup() {
  pinMode(13, 0x1);
}

void loop() {
  digitalWrite(13, 0x1);
  delay(100);
  digitalWrite(13, 0x0);
  delay(100);
}
