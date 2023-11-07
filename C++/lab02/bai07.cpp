#include <iostream>
using namespace std;

int main() {
    cout << "Nhap chieu cao cua nguoi thu nhat (cm): ";
    double nguoi1;
    cin >> nguoi1;
    cout << "Nhap chieu cao cua nguoi thu hai (cm): ";
    double nguoi2;
    cin >> nguoi2;
    if (nguoi1 > nguoi2)
    {
        cout << "Nguoi thu nhat cao hon nguoi thu hai " << nguoi1/nguoi2 << " lan\n";
    } else if (nguoi2 > nguoi1)
    {
        cout << "Nguoi thu hai cao hon nguoi thu nhat " << nguoi2/nguoi1 << " lan\n";
    } else cout << "Hai nguoi cao bang nhau";
    
    

    return 0;
}