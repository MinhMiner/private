#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Nhap mot so nguyen duong: ";
    int n;
    cin >> n;
    if (n == sqrt(n)*sqrt(n))
    {
        cout << n << " la so chinh phuong";
    } else cout << n << " khong la so chinh phuong";
    return 0;
}