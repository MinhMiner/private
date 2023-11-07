#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << "Nhap 3 so: ";
    int a, b, c;
    cin >> a >> b >> c;
    cout << "So lon nhat la " << max({a, b, c}) << '\n';
    cout << "So be nhat la " << min({a, b, c});

    return 0;
}