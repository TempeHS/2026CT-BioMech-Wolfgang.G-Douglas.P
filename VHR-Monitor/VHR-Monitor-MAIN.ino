void setup() {
  Button_setup ();
  Buzzer_setup ();
  HeartRateClip_setup ();
  LED_setup ();
  OLED_setup ();
}

void loop() {
  Button ();
  Buzzer ();
  HeartRateClip ();
  LED();
  OLED();
  delay(100);

}