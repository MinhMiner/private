#include <iostream>
using namespace std;

int main() {
    cout << "Nhap so diem: ";
    int diem;
    cin >> diem;
    switch (diem)
    {
    case 0: case 1: case 2: case 3:
        cout << "Truot";
        break;
    case 4:
        cout << "Kem";
        break;
    case 5: case 6: case 7:
        cout << "Trung binh";
        break;
    case 8: case 9:
        cout << "Gioi";
        break;
    case 10:
        cout << "Xuat sac";
        break;
    default:
        cout << "Diem so khong hop le!";
        break;
    }
    return 0;
}