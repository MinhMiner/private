#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Nhap mot so thuc: ";
    double soThuc;
    cin >> soThuc;
    cout << "Nhap n = ";
    int n;
    cin >> n;
    cout << setprecision(n) << fixed << soThuc;
    

    return 0;
}