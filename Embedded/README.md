# Embedded

Thư mục này chứa bộ tài liệu nội bộ về lập trình nhúng theo định dạng HTML để xem trên trình duyệt và xuất PDF.

## Tài liệu chính

- index.html: sổ tay tổng hợp duy nhất

## Tài liệu tham chiếu

- 01-so-tay-lap-trinh-nhung-vscode.html
- 02-thuc-hanh-sample-va-checklist.html
- 03-huong-dan-ai-cho-firmware.html

## Sample project

- samples/esp32-blink-pio
- samples/esp32-wifi-scan-pio
- samples/stm32-blink-pio
- samples/stm32-uart-pio

## Xuất PDF bằng Chromium

```bash
chromium --headless --disable-gpu --print-to-pdf=Embedded/index.pdf Embedded/index.html
```
