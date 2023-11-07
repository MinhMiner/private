#include <iostream>
using namespace std;

int main() {
    int n;
    do
    {
        cin.clear();
        fflush(stdin);
        cout << "Nhap mot so nguyen n > 1: ";
        cin >> n;   
    } while (!cin.good() or n <= 1);
    int tongCacUoc = 0;
    
    for (size_t i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            tongCacUoc += i;
        }        
    }
    if (tongCacUoc == n)
    {
        cout << n << " la so hoan hao!\n";
    } else cout << n << " khong phai la so hoan hao!\n";
    return 0;
    
    
}