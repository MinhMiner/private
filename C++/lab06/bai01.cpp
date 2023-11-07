#include <iostream>
using namespace std;

    // Viết hàm thực hiện các công việc sau:
    // i. Nhập vào dãy số N phần tử
    // ii. Tính giá trị trung bình (𝜇) của các phần tử của dãy vừa nhập
    // iii. Tính giá trị phương sai (𝜎^2) của các phần tử của dãy vừa nhập

double giaTriTB(double daySo[], int n);
double giaTriPS(double daySo[], int n, double TB);

int main() {
    int n;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    double daySo[n - 1];
    for (size_t i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> daySo[i];
    }

    double TB = giaTriTB(daySo, n);
    double PS = giaTriPS(daySo, n, TB);
    cout << "Gia tri trung binh: " << TB << '\n'
         << "Gia tri phuong sai: " << PS << '\n';
    
    return 0;
}


double giaTriTB(double daySo[], int n) {
    double tong = 0;
    for (size_t i = 0; i < n; i++)
        tong += daySo[i];
    return tong / n;
}

double giaTriPS(double daySo[], int n, double TB) {
    double tong = 0;
    for (size_t i = 0; i < n; i++)
        tong += (daySo[i] - TB) * (daySo[i] - TB);
    return tong / n;
}


