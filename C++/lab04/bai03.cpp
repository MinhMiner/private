#include <iostream>
using namespace std;

    // Nhập vào 2 số nguyên dương, nhập lại nếu không phải. Thực hiện các việc sau:
    // 1. In ra các ước số chung của 2 số đó
    // 2. Tính ước chung lớn nhất của 2 số đó
    // 3. Tính bội chung nhỏ nhất của 2 số đó
    // 4. Kiểm tra xem 2 số đó có nguyên tố cùng nhau hay không

int UCLN(int a, int b);
void inUocSo(int a, int b);

int main() {
    int a, b;
    do
    {
        cin.clear();
        fflush(stdin);
        cout << "Nhap 2 so nguyen duong a va b: ";
        cin >> a >> b;
    } while (!cin.good() or a <= 0 or b <= 0);

    inUocSo(a, b);
    cout << "Uoc chung lon nhat la: " << UCLN(a, b) << '\n';
    cout << "Boi chung nho nhat la: " << a * b / UCLN(a, b) << '\n';
    if (UCLN(a, b) == 1)
        cout << a << " va " << b << " la hai so nguyen to cung nhau\n";
    else cout << a << " va " << b << " khong phai la hai so nguyen to cung nhau\n";

    return 0;
}


int UCLN(int a, int b) {
    while (a != 0 and b != 0)
        if (a > b)
            a = a % b;
        else b = b % a;
    if (a == 0) return b; else return a;
}

void inUocSo(int a, int b) {
    int n = UCLN(a, b);
    if (n == 1)
    {
        cout << "Cac uoc so chung cua " << a << " va " << b << " la: 1\n";
    } else {
        cout << "Cac uoc so chung cua " << a << " va " << b << " la: ";
        for (size_t i = 1; i <= n / 2; i++)
            if (n % i == 0)
                cout << i << ' ';
        cout << n << endl;
    }
}