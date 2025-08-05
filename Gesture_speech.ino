// Basic Gesture-to-Speech Arduino Sketch

const int flex1 = A0;
const int flex2 = A1;
const int flex3 = A2;
const int flex4 = A3;
const int flex5 = A4;

void setup() {
  Serial.begin(9600); // Bluetooth module usually uses 9600
  pinMode(flex1, INPUT);
  pinMode(flex2, INPUT);
  pinMode(flex3, INPUT);
  pinMode(flex4, INPUT);
  pinMode(flex5, INPUT);
}

void loop() {
  int val1 = analogRead(flex1);
  int val2 = analogRead(flex2);
  int val3 = analogRead(flex3);
  int val4 = analogRead(flex4);
  int val5 = analogRead(flex5);

  // Example gesture detection (you can adjust thresholds)
  if (val1 > 500 && val2 > 500 && val3 < 400 && val4 < 400 && val5 < 400) {
    Serial.println("Hello");
    delay(1000); // to prevent rapid repeat
  } 
  else if (val1 < 400 && val2 > 500 && val3 > 500 && val4 > 500 && val5 < 400) {
    Serial.println("I need help");
    delay(1000);
  }

  // Add more gesture conditions here...

  delay(100);
}
