#include <iostream>
using namespace std;

int main() {
    cout << "Nhap mot so nguyen: ";
    int num;
    cin >> num;
    cout << "So dao nguoc la: ";
    while (num != 0)
    {
        cout << num%10;
        num /= 10;
    }
    

    return 0;
}