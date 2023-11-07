#include <iostream>
using namespace std;

int main() {
    cout << "Nhap so gio lao dong mot tuan: ";
    double gioLaoDong;
    cin >> gioLaoDong;
    cout << "Nhap so con: ";
    int soCon;
    cin >> soCon;
    double tienLuong;
    if (gioLaoDong <= 37.5)
        tienLuong = gioLaoDong * 16.78;
    else tienLuong = 37.5 * 16.78 + (gioLaoDong - 37.5) * 16.78 * 1.5;
    cout << "Tien luong truoc thue: $" << tienLuong << '\n';

    double thueBHXH = tienLuong / 20;
    double thueTNCN = tienLuong * 12 / 100;
    cout << "Thue bao hiem xa hoi: $" << thueBHXH << '\n'
         << "Thue thu nhap ca nhan: $" << thueTNCN << '\n'
         << "Tien nop cong doan: $10" << '\n';
    if (soCon >= 3)
    {
        cout << "Bao hiem suc khoe: $35\n"
             << "So tien nhan duoc: $" << tienLuong - thueBHXH - thueTNCN - 10 - 35 << '\n';
    }
    else cout << "So tien nhan duoc: $" << tienLuong - thueBHXH - thueTNCN - 10 << '\n';
    return 0;
}