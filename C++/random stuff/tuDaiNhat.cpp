#include <iostream>
#include <string>
using namespace std;

int main() {
    string tuDaiNhat = "", tuTiepTheo;
    cout << "Nhap mot xau bat ki: ";
    while (cin >> tuTiepTheo)
    {
        cout << tuTiepTheo;
        if (tuTiepTheo.length() > tuDaiNhat.length())
        {
            tuDaiNhat = tuTiepTheo;
        }
        cout << "\n tuTiepTheo.length() = " << tuTiepTheo.length() << "\n tuDaiNhat.length() = " << tuDaiNhat.length() << '\n';
        
    }
    cout << "Tu dai nhat la: " << tuDaiNhat;

    return 0;
}