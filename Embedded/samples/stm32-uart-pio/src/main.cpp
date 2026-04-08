#include <Arduino.h>

#if defined(SERIAL_PORT_MONITOR)
#define DEBUG_SERIAL SERIAL_PORT_MONITOR
#else
#define DEBUG_SERIAL Serial
#endif

namespace {
constexpr unsigned long kPrintIntervalMs = 1000;
unsigned long lastPrintMs = 0;
unsigned long counter = 0;
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  DEBUG_SERIAL.begin(115200);
  delay(300);
  DEBUG_SERIAL.println();
  DEBUG_SERIAL.println("STM32 UART sample started");
}

void loop() {
  const unsigned long now = millis();
  if (now - lastPrintMs < kPrintIntervalMs) {
    return;
  }

  lastPrintMs = now;
  ++counter;

  digitalWrite(LED_BUILTIN, counter % 2 == 0 ? HIGH : LOW);

  DEBUG_SERIAL.print("Counter: ");
  DEBUG_SERIAL.print(counter);
  DEBUG_SERIAL.print(" | uptime_ms: ");
  DEBUG_SERIAL.print(now);
  DEBUG_SERIAL.print(" | LED: ");
  DEBUG_SERIAL.println(counter % 2 == 0 ? "ON" : "OFF");
}
