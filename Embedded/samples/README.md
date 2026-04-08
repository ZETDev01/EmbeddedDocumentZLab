# Embedded Samples

Các sample này là phần thực hành đi kèm bộ tài liệu HTML trong thư mục Embedded.

## Tài liệu liên quan

- ../index.html
- ../01-so-tay-lap-trinh-nhung-vscode.html
- ../02-thuc-hanh-sample-va-checklist.html
- ../03-huong-dan-ai-cho-firmware.html

## Danh sách sample

- esp32-blink-pio: blink + serial log cho ESP32
- esp32-wifi-scan-pio: quét Wi-Fi xung quanh bằng ESP32
- stm32-blink-pio: blink + serial log cho STM32F103C8T6
- stm32-uart-pio: bộ đếm UART theo chu kỳ cho STM32F103C8T6

## Cách dùng nhanh

1. mở Visual Studio Code
2. File -> Open Folder
3. chọn một thư mục sample cụ thể
4. chờ PlatformIO hoàn tất lần cài package đầu tiên
5. bấm Build
6. bấm Upload
7. bấm Monitor

## Lưu ý

- Các sample hiện dùng framework Arduino
- Sample ESP32 mặc định dùng board esp32dev
- Sample STM32 mặc định dùng board bluepill_f103c8
- Với STM32F103C8T6 cần dùng ST-LINK để nạp và cần USB-UART nếu muốn theo dõi serial monitor
- Nếu dùng board khác, phải đổi cấu hình trong file platformio.ini trước khi nạp
