#include <iostream>
using namespace std;

int main() {
    int gio1, phut1, giay1, gio2, phut2, giay2;
    cout << "Nhap gio, phut, giay [1]: "; cin >> gio1 >> phut1 >> giay1;
    cout << "Nhap gio, phut, giay [2]: "; cin >> gio2 >> phut2 >> giay2;
    int hieu = (gio2 * 3600 + phut2 * 60 + giay2) - (gio1 * 3600 + phut1 * 60 + giay1);
    int hieuGio = hieu/3600; hieu %= 3600;
    int hieuPhut = hieu/60; hieu %= 60;
    cout << "Hieu thoi gian: " << hieuGio << " gio, " << hieuPhut << " phut, " << hieu << " giay.";
    

    return 0;
}