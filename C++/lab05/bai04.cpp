#include <iostream>
using namespace std;

    // Khai báo và định nghĩa hàm làm tròn số thực thành số nguyên gần nhất
    // Gợi ý:
    // i. sử dụng hàm ceil hoặc floor
    // + sử dụng chữ ký int roundDoubleCF(double)
    // ii. sử dụng ép (chuyển đổi) kiểu dữ liệu
    // + sử dụng chữ ký int roundDoubleEK(double)

int roundDoubleEK(double a);

int main() {
    cout << "Nhap 1 so thuc: ";
    double a;
    cin >> a;
    cout << "Lam tron " << a << " thanh so nguyen: " << roundDoubleEK(a);
    return 0;
}


int roundDoubleEK(double a) {
    if (a >= 0)
    {
        if (((int) (a * 10)) % 10 < 5)
            return (int) a;
        else return (int) a + 1;
    } else {
        if (((int) (a * 10)) % 10 >= -5)
            return (int) a;
        else return (int) a - 1;
    }
    
    
}