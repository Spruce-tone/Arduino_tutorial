void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() {
    int sum;
    sum = add(4, 5);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    Serial.println(sum);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  
}


int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}