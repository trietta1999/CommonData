## Common Data
>Sử dụng biến một cách hoàn toàn chuyên nghiệp

1. Đặc điểm
- Chỉ có một class CommonData duy nhất tồn tại xuyên suốt chương trình
- Mỗi biến là một object của class CommonData
- Khi set giá trị của một object, trạng thái thay đổi của nó sẽ tồn tại trong một chu kỳ (nếu chương trình là một vòng lặp tuần hoàn)

2. Thiết kế thư viện
>Là một cấu trúc chung, tùy theo từng ngôn ngữ lập trình mà sẽ có cách tùy biến khác nhau

Tuy nhiên, việc thiết kế hãy theo cấu trúc file như sau:\
&nbsp;&nbsp;&nbsp;&nbsp;Thư mục project\
&nbsp;&nbsp;&nbsp;&nbsp;├── CommonData\
&nbsp;&nbsp;&nbsp;&nbsp;│   └── Class CommonData\
&nbsp;&nbsp;&nbsp;&nbsp;├── Interface\
&nbsp;&nbsp;&nbsp;&nbsp;│   ├── Tạo mới object\
&nbsp;&nbsp;&nbsp;&nbsp;│   └── Update object\
&nbsp;&nbsp;&nbsp;&nbsp;└── Main\
- CommonData: chứa `class CommonData`, được code theo kiểu template để có thể sử dụng được mọi kiểu dữ liệu
- Interface: là nơi khai báo object với mọi kiểu dữ liệu, chứa hàm `UpdateAll()` để update trạng thái thay đổi từng object
- Main: chứa chương trình chính

3. Sử dụng thư viện\
Sửa đổi 2 file sau:
- Interface:
  + Thêm object ở mục `Create new common data`
  + Gọi hàm `Update()` của object vừa thêm vào hàm `UpdateAll()`
- Main: Sử dụng các object như một biến class bằng cách gọi các hàm của nó
  + `Set(value)`: Set giá trị cho object
  + `GetValue()`: Lấy giá trị của object
  + `GetOldValue()`: Lấy giá trị cũ của object
  + `GetState()`: Lấy trạng thái thay đổi của object
>Cách sử dụng đã có ở từng file Main trong project

4. Điểm hạn chế của thư viện
- Hiện tại chỉ hỗ trợ cho chương trình đơn tiến trình
- Hỗ trợ đa luồng: chưa được test, mong nhận được sự đóng góp từ cộng đồng

6. Ngôn ngữ lập trình
- Visual C++ (Visual Studio 2017 hoặc hơn)
- Arduino (C++)
- Python
- Ngôn ngữ khác: Mong nhận được sự đóng góp từ cộng đồng
