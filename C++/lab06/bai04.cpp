#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

    // Viết hàm in ra tam giác Pascal bậc n, ví dụ với n = 6.
    // 1
    // 1  1
    // 1  2  1
    // 1  3  3  1
    // 1  4  6  4  1
    // 1  5 10 10  5  1
    // Cần căn lề các cột

void tamGiacPascal(int n);

int main() {
    cout << "In tam giac Pascal bac n = ";
    int n;
    cin >> n;
    tamGiacPascal(n);
    return 0;
}


void tamGiacPascal(int n) {
    vector<int> a[n];

    // Tính số chữ số của số lớn nhất để căn lề các cột
    int b = 1, c = 1;
    for (int i = n/2 + 1; i <= n; i++)
        b *= i;
    for (int i = 2; i <= n/2; i++)
        c *= i;
    int width = to_string(b / c).length() + 1;

    // Tính toán các giá trị trong tam giác Pascal
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                a[i].push_back(1);
                cout << setw(width) << a[i][j];
            }
            else {
                a[i].push_back(a[i - 1][j - 1] + a[i - 1][j]);
                cout << setw(width) << a[i][j];
            }           
        }
        cout << '\n';        
    }    
}