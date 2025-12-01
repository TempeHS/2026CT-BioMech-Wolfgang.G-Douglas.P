#include <DFRobot_Heartrate.h>

const int HR_PIN = 6;
DFRobot_Heartrate heartRate(HR_PIN);

void setup() {
  Serial.begin(9600);
  Serial.println("=== Heart Rate Clip Sensor ===");
  Serial.println("Sensor initialized on pin D6");
  Serial.println("Position ear clip on earlobe");
  delay(2000);
}

void loop() {
  HeartRateClip();
}

void HeartRateClip_setup() {
  Serial.println("Setup complete - ready to measure");
}

void HeartRateClip() {
  int BPM = heartRate.getRate();  // Fixed: Changed getHeartRate() to getRate()
  
  Serial.print("Heart Rate: ");
  Serial.print(BPM);
  Serial.println(" BPM");
  
  delay(500);
}