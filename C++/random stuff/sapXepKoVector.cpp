#include <iostream>
using namespace std;

int main() {
    cout << "Nhap so phan tu n = ";
    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }

    int j = n - 1, temp;
    for (size_t i = 0; i < n; i++)
        if (a[i] % 2 == 1)
        {
            while (j != i)
            {
                if (a[j] % 2 == 0)
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
                else j--;
            }
            if (j == i)
                break;        
        }        

    for (size_t i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}