#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Nhap 3 he so a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if (delta > 0)
    {
        cout << "Phuong trinh ax^2 + bx + c = 0 co hai nghiem:\n";
        cout << "x1 = " << (- b + sqrt(delta))/(2*a) << ";\tx2 = " << (- b - sqrt(delta))/(2*a);
    } else if (delta == 0)
    {
        cout << "Phuong trinh ax^2 + bx + c = 0 co mot nghiem: x = " << - b/(2 * a);
    } else cout << "Phuong trinh ax^2 + bx + c = 0 vo nghiem\n";
    return 0;
    
    
}