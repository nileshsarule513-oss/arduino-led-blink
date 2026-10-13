/*
 * LED Blinking using Arduino
 * ---------------------------------------------------------
 * Blinks an external LED connected to digital pin 8 using a
 * non-blocking timer (millis) so the loop stays responsive.
 *
 * Hardware:
 *   Arduino Uno -> D8 -> 220 ohm resistor -> LED anode (+)
 *   LED cathode (-) -> GND
 *
 * Course : Project Management (2307476T), MITAOE
 * Author : Nilesh Raju Sarule
 */

const uint8_t LED_PIN = 8;                 // external LED pin
const unsigned long BLINK_INTERVAL = 500;  // ms between toggles

bool ledState = LOW;
unsigned long previousMillis = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, ledState);
  Serial.begin(9600);
  Serial.println(F("LED blink started"));
}

void loop() {
  unsigned long currentMillis = millis();

  // Subtraction stays correct even when millis() overflows (~49 days)
  if (currentMillis - previousMillis >= BLINK_INTERVAL) {
    previousMillis = currentMillis;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    Serial.println(ledState ? F("LED ON") : F("LED OFF"));
  }
}
