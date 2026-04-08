#include <Arduino.h>
#include <WiFi.h>

#if defined(SERIAL_PORT_MONITOR)
#define DEBUG_SERIAL SERIAL_PORT_MONITOR
#else
#define DEBUG_SERIAL Serial
#endif

namespace {
constexpr unsigned long kScanIntervalMs = 8000;
unsigned long lastScanMs = 0;

void printSecurityMode(wifi_auth_mode_t authMode) {
  const bool isOpen = authMode == WIFI_AUTH_OPEN;
  DEBUG_SERIAL.print(" | OPEN: ");
  DEBUG_SERIAL.println(isOpen ? "Yes" : "No");
}
}

void setup() {
  DEBUG_SERIAL.begin(115200);
  delay(400);
  DEBUG_SERIAL.println();
  DEBUG_SERIAL.println("ESP32 Wi-Fi scan sample started");

  WiFi.mode(WIFI_STA);
  WiFi.disconnect(true, true);
  delay(200);
}

void loop() {
  const unsigned long now = millis();
  if (now - lastScanMs < kScanIntervalMs) {
    return;
  }

  lastScanMs = now;
  DEBUG_SERIAL.println();
  DEBUG_SERIAL.println("Scanning Wi-Fi networks...");

  const int networkCount = WiFi.scanNetworks();
  if (networkCount <= 0) {
    DEBUG_SERIAL.println("No networks found");
    return;
  }

  for (int i = 0; i < networkCount; ++i) {
    DEBUG_SERIAL.print("[");
    DEBUG_SERIAL.print(i + 1);
    DEBUG_SERIAL.print("] ");
    DEBUG_SERIAL.print(WiFi.SSID(i));
    DEBUG_SERIAL.print(" | RSSI: ");
    DEBUG_SERIAL.print(WiFi.RSSI(i));
    DEBUG_SERIAL.print(" dBm");
    printSecurityMode(WiFi.encryptionType(i));
  }

  WiFi.scanDelete();
}
