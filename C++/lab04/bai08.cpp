#include <iostream>
#include <cmath>
using namespace std;

// Giải phương trình nghiệm nguyên. Tìm tất cả các nghiệm nguyên của phương trình
// 𝑎^2 + 𝑏^2 = 𝑐^2. Với 𝑚 ≤ 𝑎 ≤ 𝑏, 𝑐 ≤ 𝑛 ≤ 50. In tất cả các bộ ba: a, b, c thỏa mãn
// phương trình & điều kiện trên. Ví dụ:
//      Dữ liệu vào                     Kết quả tương ứng
// m = 1                           3 4 5
// n = 20                          5 12 13
//                                 6 8 10
//                                 8 15 17
//                                 9 12 15
//                                 12 16 20

int main() {
    int m, n;
    cout << "Nhap m = ";
    cin >> m;
    cout << "Nhap n = ";
    cin >> n;
    int a = m, b;
    double c;
    while (2*a*a <= n*n)
    {
        b = a;
        while (a*a + b*b <= n*n)
        {
            c = sqrt(a*a + b*b);
            if (c == (int) c)
            {
                cout << a << ' ' << b << ' ' << c << '\n';
                break;
            }
            else b++;            
        }
        a++;
    }   
    return 0;
}