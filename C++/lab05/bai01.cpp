#include <iostream>
using namespace std;

    // Khai báo và định nghĩa các hàm tong, hieu, tich, thuong, chiadu, để thực
    // hiện các phép toán cộng (+), trừ (-), nhân (*), chia (/), lấy phần dư (%) cho 2 số
    // nguyên (int). Sử dụng các chữ ký hàm sau đây:
    // + int tong(int so_thu_1, int so_thu_2)
    // + int hieu(int so_thu_1, int so_thu_2)
    // + int tich(int so_thu_1, int so_thu_2)
    // + int thuong(int so_thu_1, int so_thu_2)
    // + int chiadu(int so_thu_1, int so_thu_2)
    // Viết chương trình int main():
    // + nhập vào 2 số nguyên
    // + thực hiện các phép toán trên cho 2 số này sử dụng các hàm trên
    // + và sau đó in ra kết quả của các phép toán vừa thực hiện

int tong(int so_thu_1, int so_thu_2);
int hieu(int so_thu_1, int so_thu_2);
int tich(int so_thu_1, int so_thu_2);
int thuong(int so_thu_1, int so_thu_2);
int chiadu(int so_thu_1, int so_thu_2);


int main() {
    cout << "Nhap 2 so nguyen: ";
    int a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << tong(a, b) << '\n';
    cout << a << " - " << b << " = " << hieu(a, b) << '\n';
    cout << a << " x " << b << " = " << tich(a, b) << '\n';
    cout << a << " : " << b << " = " << thuong(a, b) << '\n';
    cout << a << " % " << b << " = " << chiadu(a, b) << '\n';

    return 0;
}

int tong(int so_thu_1, int so_thu_2) {
    return so_thu_1 + so_thu_2;
}
int hieu(int so_thu_1, int so_thu_2) {
    return so_thu_1 - so_thu_2;
}
int tich(int so_thu_1, int so_thu_2) {
    return so_thu_1 * so_thu_2;
}
int thuong(int so_thu_1, int so_thu_2) {
    return so_thu_1 / so_thu_2;
}
int chiadu(int so_thu_1, int so_thu_2) {
    return so_thu_1 % so_thu_2;
}