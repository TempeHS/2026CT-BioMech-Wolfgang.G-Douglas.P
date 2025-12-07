
static unsigned int mybutton = 3;

void Button_setup() {
  Serial.begin(9600);
  pinMode(myButton, INPUT);
}

void Button() {
  Serial.print("myButton:");
  Serial.println(digitalRead(myButton));
}