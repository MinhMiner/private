#include <iostream>
using namespace std;

int main() {
    cout << "Nhap vao do F: ";
    double F;
    cin >> F;
    double C = (F - 32)/1.8;
    cout << F << " do F = " << C << " do C\nNhap vao do C: ";
    cin >> C;
    F = C * 1.8 + 32;
    double K = C + 273.15;
    cout << C << " do C = " << F << " do F = " << K << " do K\n";
    return 0;
}