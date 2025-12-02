#include <PulseSensorPlayground.h>

const int HR_PIN = A0;
PulseSensorPlayground heartRate;

void setup() {
  Serial.begin(9600);
  Serial.println("=== Heart Rate Clip Sensor ===");
  Serial.println("Sensor initialized on pin D6");
  Serial.println("Position ear clip on earlobe");

  heartRate.analogInput(HR_PIN);
  if (!heartRate.begin()) {
    Serial.println("Error: PulseSensor begin() failed");
  } else {
    Serial.println("PulseSensor initialized");
  }
  delay(2000);
}

void loop() {
  int raw = analogRead(HR_PIN);
  Serial.print("Raw: ");
  Serial.print(raw);

  int BPM = heartRate.getBeatsPerMinute();
  bool sawBeat = heartRate.sawStartOfBeat();

  if (BPM >= 0) {
    Serial.print("  >>> Beat! BPM: ");
    Serial.print(BPM);

  } else {
      Serial.print("  (no beat)");
  }

  Serial.println();
  delay(100);
}