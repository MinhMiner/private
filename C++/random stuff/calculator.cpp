#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main() {
    cout << "********** CALCULATOR **********\n";

    char op;
    double num1, num2, result;

    do
    {
        cin.clear();
        fflush(stdin);
        cout << "Nhap phep tinh don gian: ";
        cin >> num1 >> op >> num2;
    } while (!cin.good());
    


    switch (op)
            {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
               break;
            case '^':
                result = pow(num1, num2);
                break;
            default:
               break;
            }
    cout << num1 << " " << op << " " << num2 << " = " << result << "\n\n";
    
    

    
    



    cout << "********************************";
    return 0;
}