/*
Reads from photosensor. If It's below threshold value It lights the LED
You can read the values from serial monitor, open It with the symbol at the right of the window
*/

int sensorPin = A0;   // select the input pin for ldr
int sensorValue = 0;  // variable to store the value coming from the sensor
int Led3 = 11;
double threshold = 700.5;
void setup() {
  pinMode(Led3, OUTPUT); //pin connected to the relay
  Serial.begin(9600); //sets serial port for communication
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
  Serial.println(sensorValue); //prints the values coming from the sensor on the screen
  
  if(sensorValue < threshold) //setting a threshold value
  digitalWrite(Led3,HIGH); //turn  ON
  
  else digitalWrite(Led3,LOW); //turn  OFF
  
  delay(100);                  
}