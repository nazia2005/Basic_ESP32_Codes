#define led 2
#define sw1 4

int ledState = LOW;       // Current LED state
int lastSwState = HIGH;   // Previous switch state

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sw1, INPUT); 
  Serial.begin(115200); 
  digitalWrite(led, ledState);
}

void loop() {
  int swState = digitalRead(sw1); // Check if switch was just pressed
  if (swState == LOW && lastSwState == HIGH) {
    
    ledState = !ledState; // Toggle LED state   

    digitalWrite(led, ledState);
    if (ledState == HIGH) {
    Serial.println("Led is ON");
    }
    //delay(50); 
    else {
      Serial.println("led is OFF");
    }
  }

  lastSwState = swState; 

}
