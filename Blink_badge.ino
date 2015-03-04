/*
  Blink Badge
  by Scott Thomas
  
  This is the basic code for the 2015 New Orleans Mini Maker Faire VIP Badge.
  If the badge has been constructed properly, the LEDs will light up one at 
  a time from left to right. Turning the trimpot should change how quickly
  the lights blink.
  
  LEDs are attached from left to right to digital pins 2 - 7. The trimpot
  is connected to analog pin 1.
 
 */

int val = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // This loop initializes the digital pins as OUTPUT
  for (int i=2; i < 8; i++){
    pinMode(i, OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  
  //For each pin, read trimpot value to use as delay between turning LED on/off
  for (int x=2; x < 8; x++){
    val = constrain(analogRead(0), 5, 2000); //read & constrain trimpot value
    digitalWrite(x, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(val);              // wait 
    digitalWrite(x, LOW);    // turn the LED off by making the voltage LOW
    delay(val);              // wait 
  }
}
