#include <iostream>
using namespace std;

int main() {
    cout << "Nhap ban kinh cua hinh tron: ";
    double R;
    cin >> R;
    const double pi = 3.14159;
    cout << "Duong kinh cua hinh tron la: " << R*2 << '\n';
    cout << "Chu vi cua hinh tron la: " << R*2*pi << '\n';
    cout << "Dien tich cua hinh tron la: " << R*R*pi;

    return 0;
}