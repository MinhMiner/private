// #include <iostream>
// using namespace std;

//     // Sử dụng các hàm trong Bài tập 1, để xây dựng chương trình máy tính bỏ túi.
//     // Khai báo và định nghĩa hàm nhập vào phép toán muốn thực hiện, ví dụ '+' (tổng),
//     // '-' (hiệu), '*' (tích), '/' (thương), '%' chia dư. Sử dụng chữ ký hàm sau đây:
//     // + void nhapPhepToan(char& phepToan)
//     //   - sử dụng cin nhập dữ liệu cho biến phepToan
//     //   - phép toán nhập vào phải hợp lệ, là một trong 5 phép toán trên, nếu không
//     // phải nhập lại
//     //   - xem slide 42, 43
//     // Khai báo và định nghĩa hàm thực hiện phép toán, sử dụng chữ ký sau:
//     // + int thucHienPhepToan(char phepToan,
//     // int so_thu_1,
//     // int so_thu_2)
//     //   - sử dụng switch(phepToan) để chọn phép toán muốn thực hiện
//     //   - trả về kết quả của phép toán vừa thực hiện
//     // Khai báo và định nghĩa hàm nhập vào một số nguyên, sử dụng chữ ký sau:
//     // + void nhapSoNguyen(int& soNguyen)
//     // 2
//     // Viết chương trình int main():
//     // + nhập vào phép toán muốn thực hiện (sử dụng hàm nhapPhepToan)
//     // + nhập vào 2 số nguyên
//     // + thực hiện tính toán trên 2 số nguyên sử dụng phép toán vừa nhập
//     // + In kết quả của phép toán vừa thực hiện
//     // + In ra thông báo kết quả này là âm hay dương
//     // Khai báo và định nghĩa hàm để in ra nội dung phép toán phép toán vừa thực hiện.
//     // Sau đó sử dụng các hàm này để in ra nội dung phép toán (thay vì chỉ in ra kết quả),
//     // sử dụng chữ ký hàm như sau:
//     // + void inKetQuaBieuThuc(char phepToan,
//     // int so_thu_1,
//     // int so_thu_2)
//     //   - theo dạng 2 + 3 = 5
//     // + void inKetQuaBieuThucHam(char phepToan,
//     // int so_thu_1,
//     // int so_thu_2)
//     //   - theo dạng +(2, 3) = 5
//     // Sửa hàm nhapPhepToan để cho phép nhập vào dấu '='.
//     // Sửa chương trình int main() để cho phép tiếp tục thực hiện các phép toán cho tới khi
//     // nhập vào '='. Khi nhập vào dấu '=', không thực hiện tính toán, không in ra kết
//     // quả phép toán, không in ra thông báo âm hay dương. Gợi ý: sử dụng cấu trúc lặp

// int tong(int so_thu_1, int so_thu_2);
// int hieu(int so_thu_1, int so_thu_2);
// int tich(int so_thu_1, int so_thu_2);
// int thuong(int so_thu_1, int so_thu_2);
// int chiadu(int so_thu_1, int so_thu_2);


// int main() {
//     cout << "Nhap 2 so nguyen: ";
//     int a, b;
//     cin >> a >> b;
//     cout << a << " + " << b << " = " << tong(a, b) << '\n';
//     cout << a << " - " << b << " = " << hieu(a, b) << '\n';
//     cout << a << " x " << b << " = " << tich(a, b) << '\n';
//     cout << a << " : " << b << " = " << thuong(a, b) << '\n';
//     cout << a << " % " << b << " = " << chiadu(a, b) << '\n';

//     return 0;
// }

// int tong(int so_thu_1, int so_thu_2) {
//     return so_thu_1 + so_thu_2;
// }
// int hieu(int so_thu_1, int so_thu_2) {
//     return so_thu_1 - so_thu_2;
// }
// int tich(int so_thu_1, int so_thu_2) {
//     return so_thu_1 * so_thu_2;
// }
// int thuong(int so_thu_1, int so_thu_2) {
//     return so_thu_1 / so_thu_2;
// }
// int chiadu(int so_thu_1, int so_thu_2) {
//     return so_thu_1 % so_thu_2;
// }