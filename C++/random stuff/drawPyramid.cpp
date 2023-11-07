#include <iostream>
using namespace std;

int main() {
    cout << "Nhap so nguyen n = ";
    int n; cin >> n;

    // Kim tu thap dac
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2*i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Kim tu thap rong
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        cout << "* ";
        for (int j = 0; j < 2*i - 1; j++)
        {
            if (i != n - 1)
            {
                cout << "  ";
            }
            else cout << "* ";
            
        }
        if (i != 0)
        {
            cout << "* \n";
        } else cout << "\n";
         
    }

    return 0;
}