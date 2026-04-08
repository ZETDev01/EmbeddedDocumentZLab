# Z Lab VN - Bộ tài liệu nội bộ

Thư mục này chứa bộ tài liệu vận hành nội bộ đã được soạn cho Z Lab VN.

## Tệp chính

- `01-so-tay-van-hanh-noi-bo.md`: bản hợp nhất quy định vận hành + quy định nội bộ.
- `01-so-tay-van-hanh-noi-bo.html`: bản trình bày đến trang, dạng văn bản để in và xuất PDF.
- `01-so-tay-van-hanh-noi-bo.pdf`: bản PDF, nếu đã được xuất.
- `02-quy-dinh-noi-bo-lab-va-luu-tru.md`: bộ quy định riêng cho giờ làm, Lab và lưu trữ Drive.
- `02-quy-dinh-noi-bo-lab-va-luu-tru.html`: bản web-document có thể mở online/nội bộ và in PDF.
- `02-quy-dinh-noi-bo-lab-va-luu-tru.pdf`: bản PDF tương ứng, nếu đã được xuất.

## Mục đích

Bộ tài liệu này tập trung vào:

- quy chế phối hợp và vận hành;
- quy trình thực hiện dự án AI, Robotics, nhúng;
- quy định lưu trữ, đặt tên file và đồng bộ dữ liệu;
- kế hoạch áp dụng nội bộ trong 30 ngày.

## Cách xuất PDF bằng Chromium

Từ thư mục này, có thể xuất PDF bằng lệnh:

```bash
chromium --headless --disable-gpu --print-to-pdf=01-so-tay-van-hanh-noi-bo.pdf 01-so-tay-van-hanh-noi-bo.html
```
