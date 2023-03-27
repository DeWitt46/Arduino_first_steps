/*
  Blink with a for cycle

  Turns an LED on for one second, then off for one second, repeatedly.

2nd example of Arduino Day 2023 in SciFabLab

Resistence is needed on the board to protect the component from receiving too much current

0 and 1 pin are usually already used by our PC
*/
//Loop

int timer = 100;           // tempo

void setup() {
  // inizializza tutti i pin come OUTPUT
  for (int LEDpin = 2; LEDpin <= 13; LEDpin++)  {
    pinMode(LEDpin, OUTPUT);      
  }
}

void loop() {
  // loop dal primo all'ultimo
for (int LEDpin = 2; LEDpin <= 13; LEDpin++) { 
    // accende
    digitalWrite(LEDpin, HIGH);   
    delay(timer);                  
    // spegne
    digitalWrite(LEDpin, LOW);    
  }

  // loop dall'ultimo al primo

  for (int LEDpin = 13; LEDpin >= 10; LEDpin--) { 
    // accende
    digitalWrite(LEDpin, HIGH);
    delay(timer);
    // spegne
    digitalWrite(LEDpin, LOW);
   
  }
  
}