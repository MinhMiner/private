#include <iostream>
using namespace std;

int main() {
    cout << "Nhap gio, phut, giay: ";
    int h, m, s;
    cin >> h >> m >> s;
    cout << "Con " << 86400 - h*3600 - m*60 - s 
         << " giay nua la den thoi diem 0 gio, 0 phut, 0 giay!\n";
    return 0;
}