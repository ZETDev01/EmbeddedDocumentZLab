#include <Arduino.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

#if defined(SERIAL_PORT_MONITOR)
#define DEBUG_SERIAL SERIAL_PORT_MONITOR
#else
#define DEBUG_SERIAL Serial
#endif

namespace {
constexpr unsigned long kBlinkIntervalMs = 500;
unsigned long lastToggleMs = 0;
bool ledState = false;
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  DEBUG_SERIAL.begin(115200);
  delay(300);
  DEBUG_SERIAL.println();
  DEBUG_SERIAL.println("ESP32 blink sample started");
}

void loop() {
  const unsigned long now = millis();
  if (now - lastToggleMs < kBlinkIntervalMs) {
    return;
  }

  lastToggleMs = now;
  ledState = !ledState;
  digitalWrite(LED_BUILTIN, ledState ? HIGH : LOW);

  DEBUG_SERIAL.print("LED state: ");
  DEBUG_SERIAL.println(ledState ? "ON" : "OFF");
}
