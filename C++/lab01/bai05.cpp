#include <iostream>
using namespace std;

int main() {
    cout << "Nhap chieu dai: ";
    double chieuDai;
    cin >> chieuDai;
    cout << "Nhap chieu rong: ";
    double chieuRong;
    cin >> chieuRong;
    cout << "Chu vi hinh chu nhat la: " << (chieuDai + chieuRong)*2 << '\n';
    cout << "Dien tich hinh chu nhat la: " << chieuDai * chieuRong;

    return 0;
}