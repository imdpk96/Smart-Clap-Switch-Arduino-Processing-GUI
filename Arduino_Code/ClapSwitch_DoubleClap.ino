const int soundSensor = 2;     // D0 of sound sensor
const int relayPin = 8;        // Relay control pin

int clapCount = 0;
unsigned long firstClapTime = 0;
bool bulbState = false;

void setup() {
  pinMode(soundSensor, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Bulb OFF initially
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(soundSensor);
  unsigned long currentTime = millis();

  if (sensorValue == HIGH) {
    // Ignore if claps are too close together (debounce)
    if (currentTime - firstClapTime > 200) {
      clapCount++;
      Serial.print("Clap ");
      Serial.println(clapCount);

      // First clap: start timing
      if (clapCount == 1) {
        firstClapTime = currentTime;
      }

      delay(50); // short debounce
    }
  }

  // If 2 claps detected within 1 second
  if (clapCount == 2 && (currentTime - firstClapTime <= 1000)) {
    bulbState = !bulbState;
    digitalWrite(relayPin, bulbState ? HIGH : LOW);
    Serial.println(bulbState ? "Bulb ON" : "Bulb OFF");
    
    // Reset for next double clap
    clapCount = 0;
    delay(500); // delay to prevent re-trigger
  }

  // If too much time passed after 1st clap, reset counter
  if (clapCount > 0 && (currentTime - firstClapTime > 1000)) {
    clapCount = 0;
  }
}
