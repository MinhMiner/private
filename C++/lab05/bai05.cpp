#include <iostream>
using namespace std;

    // Khai báo và định nghĩa hàm để tính phần dư khi thực hiện chia hai số thực, ví dụ:
    // 2.1%1.1=1.0; 2.3%1.1=0.1; 2.2%1.1=0.0; Hãy so sánh kết quả với hàm fmod hàm
    // trong thư viện cmath. Sử dụng chữ ký double dmod(double)

double dmod(double a, double b);

int main() {
    cout << "Nhap 2 so thuc: ";
    double a, b;
    cin >> a >> b;
    cout << a << " % " << b << " = " << dmod(a, b);
    return 0;
}


double dmod(double a, double b) {
    return a - ((int) (a / b) * b);
}