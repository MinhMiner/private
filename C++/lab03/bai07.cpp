#include <iostream>
using namespace std;

int main() {
    cout << "Nhap 3 he so a1, b1, c1: ";
    double a1, b1, c1; cin >> a1 >> b1 >> c1;
    cout << "Nhap 3 he so a2, b2, c2: ";
    double a2, b2, c2; cin >> a2 >> b2 >> c2;
    double x, y;
    if (a1/a2 == b1/b2)
    {
        if (a1/a2 == c1/c2)
        {
            cout << "He phuong trinh co vo so nghiem";
        }
        else cout << "He phuong trinh vo nghiem";       
    } else
    {
        y = (a2 * c1 - a1 * c2)/(a2 * b1 - a1 * b2);
        if (a1 != 0)
        {
            x = (c1 - b1 * y)/a1;
        }
        else x = (c2 - b2 * y)/a2;    
        cout << "He phuong trinh co nghiem:\nx = " << x << "\ny = " << y;    
    }
    return 0;
}