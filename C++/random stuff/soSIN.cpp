#include <iostream>
using namespace std;

int main() {
    long SIN;
    start: do
    {
        cin.clear();
        fflush(stdin);
        cout << "SIN (0 de thoat): ";
        cin >> SIN;
        if (SIN == 0)
        {
            return 0;
        }
        
    } while (SIN < 100000000 or SIN > 999999999 or !cin.good());


    int s1, s2;
    s1 = (SIN/100000000)%10 + (SIN/1000000)%10 + (SIN/10000)%10 + (SIN/100)%10;
    s2 = (((SIN/10000000)%10)*2)/10+(((SIN/10000000)%10)*2)%10+(((SIN/100000)%10)*2)/10+
         (((SIN/100000)%10)*2)%10+(((SIN/1000)%10)*2)/10+(((SIN/1000)%10)*2)%10+
         (((SIN/10)%10)*2)/10+(((SIN/10)%10)*2)%10;
         
    if ((s1+s2+SIN%10)%10 == 0)
    {
        cout << "SIN hop le!\n";
    } else cout << "SIN khong hop le!\n";

    goto start;

    
    

    return 0;
}