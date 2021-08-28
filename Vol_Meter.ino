int voltagePin = A1;
int voltageValue;
float voltage;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(voltagePin, INPUT_PULLUP); // INPUT_PULLUP Acts like a pullup resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  voltageValue = analogRead(voltagePin);
  voltage = voltageValue/1023.0 * 5.0;
  Serial.println(String(voltage) + " V");
}
