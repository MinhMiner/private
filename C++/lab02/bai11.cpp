#include <iostream>
using namespace std;

int main() {
    cout << "Nhap khoan tien ban can: $";
    double tienMuonVay;
    cin >> tienMuonVay;
    cout << "Nhap lai suat vay tieu dung (%): ";
    double laiSuat;
    cin >> laiSuat;
    cout << "Nhap thoi gian vay (thang): ";
    int thoiGian;
    cin >> thoiGian;
    double khoanVay = tienMuonVay/(1 - laiSuat/100 * thoiGian/12.0);
    cout << "Gia tri khoan vay la: $" << khoanVay << '\n';
    cout << "Khoan tra gop hang thang la: $" << khoanVay/thoiGian;


    return 0;
}