#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << "Nhap 3 so a, b, c: ";
    double a, b, c, d, e, f;
    cin >> a >> b >> c;
    d = min({a, b, c});
    f = max({a, b, c});
    e = a + b + c - d - f;
    if (d + e <= f)
    {
        cout << "Ba so nay khong phai la do dai 3 canh tam giac!";
        return 0;
    }
    cout << "Chu vi cua tam giac la: " << d + e + f << '\n';
    if (f*f == d*d + e*e)
    {
        cout << "Tam giac nay la tam giac vuong\n";
    }
    if (d == e or d == f or e == f)
    {
        if (d == e and d == f)
        {
            cout << "Tam giac nay la tam giac deu\n";
        } else cout << "Tam giac nay la tam giac can\n";
        
    }
    
    

    

    return 0;
}