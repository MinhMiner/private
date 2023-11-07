#include <iostream>
using namespace std;

int main() {
    cout << "Nhap thang: ";
    int thang;
    cin >> thang;
    switch (thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "Thang " << thang << " co 31 ngay\n";
        break;
    case 4: case 6: case 9: case 11:
        cout << "Thang " << thang << " co 30 ngay\n";
        break;
    case 2:
        cout << "Thang 2 co 28 hoac 29 ngay\n";
        break;
    default:
        cout << "Thang khong hop le!\n";
        break;
    }


    return 0;
}