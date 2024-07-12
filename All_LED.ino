void setup() { 
  for(int i = 13; i >= 9; i-- ) 
  { 
    pinMode(i, OUTPUT); 
    digitalWrite(i, HIGH); 
    delay(1000); 
    digitalWrite(i, LOW); 
  } 
} 
 
void loop() { 
  setup();
}
