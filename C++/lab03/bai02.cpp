#include <iostream>
using namespace std;

int main() {
    cout << "Nhap mot ky tu: ";
    char a, b;
    cin >> a;
    if (a >= 'a' and a <= 'z')
    {
        b = a - 32;
        cout << "Chu cai hoa tuong ung cua " << a << " la " << b;
    }
    else if (a >= 'A' and a <= 'Z')
    {
        b = a + 32;
        cout << "Chu cai thuong tuong ung cua " << a << " la " << b;
    } else cout << a << " khong la chu cai";
    
    
    return 0;
}