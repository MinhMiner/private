#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << "Nhap 3 so: ";
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Tong hai so nho nhat la " << a + b + c - max({a, b, c}) << '\n';
    cout << "Tong hai so lon nhat la " << a + b + c - min({a, b, c});

    return 0;
}