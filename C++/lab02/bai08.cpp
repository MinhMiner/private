#include <iostream>
using namespace std;

int main() {
    cout << "Nhap so gio: ";
    int gio;
    cin >> gio;
    int tuan, ngay;
    tuan = gio/(24*7);
    gio %= (24*7);
    ngay = gio/24;
    gio %= 24;
    cout << tuan << " tuan, " << ngay << " ngay, " << gio << " gio\n";

    return 0;
}