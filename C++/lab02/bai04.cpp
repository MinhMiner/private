#include <iostream>
using namespace std;

int main() {
    cout << "Nhap 4 so nguyen a, b, c, d:\n";
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool ketQua = a + b > c + d || a - b > c - d;
    cout << "a + b > c + d || a - b > c - d = " << ketQua;

    return 0;
}