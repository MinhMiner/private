#include <iostream>
using namespace std;

int main() {
    cout << "********** Temperature Conversion **********\n";

    // INPUT
    cout << "Enter the temperature: ";
    double tempInput, tempOutput;
    cin >> tempInput;

    cout << "Choose a mode:\n1. Celsius to Fahrenheit (C -> F)\n2. Fahrenheit to Celsius (F -> C)\nType 1 or 2: ";
    int mode;
    cin >> mode;
    while (mode != 1 and mode != 2)
    {
        cout << "Invalid response!\n" << "Choose a mode:\n1. Celsius to Fahrenheit (C -> F)\n2. Fahrenheit to Celsius (F -> C)";
        cin >> mode;
    }
    cout << "You have selected mode: " << (mode == 1? "1. Celsius to Fahrenheit (C -> F)\n" : "2. Fahrenheit to Celsius (F -> C)\n");
    
    // Conversion and Output
    switch (mode)
    {
    case 1:
        tempOutput = tempInput*1.8 + 32;
        cout << "   Result: " << tempInput << " Celsius -> " << tempOutput << " Fahrenheit\n";
        break;
    case 2:
        tempOutput = (tempInput - 32)/1.8;
        cout << "   Result: " << tempInput << " Fahrenheit -> " << tempOutput << " Celsius\n";
        break; 
    default:
        break;
    }
    


    cout << "********************************************";

    
    return 0;
}