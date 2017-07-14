void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                 // wait for 3 seconds

  digitalWrite(LED_BUILTIN, HIGH); //turn the LED on (starting of the letter O)
  delay(3000);                     //wait for 3 seconds
  digitalWrite(LED_BUILTIN, LOW); //turn the LED off 
  delay(1000);                    //wait for a second
  digitalWrite(LED_BUILTIN, HIGH); //turn the LED on
  delay(3000);                    //wait for 3 seconds
  digitalWrite(LED_BUILTIN, LOW); //turn the LED off 
  delay(1000);                    //wait for a second
  digitalWrite(LED_BUILTIN, HIGH); //turn the LED on
  delay(3000);                    //wait for 3 seconds
  digitalWrite(LED_BUILTIN, LOW); //turn the LED off 
  delay(3000);                    //wait for 3 seconds

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (starting of the letter S)
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  
}
