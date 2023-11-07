#include <iostream>
using namespace std;

int checkDate() {
    // Input
    cout << "Nhap ngay theo dinh dang dd/mm/yyyy: ";
    string input;
    getline(cin >> ws, input);
    if (input.length() < 7)
    {
        cout << "Ngay thang nam khong hop le!\n";
        return 0;
    }
    
    int day = stoi(input.substr(0,2));
    int month = stoi(input.substr(3,2));
    int year = stoi(input.substr(6,4));
    
    // Xu li
    bool valid;
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (day >= 1 and day <= 31)
        {
            valid = true;
        } else valid = false;        
        break;
    case 4: case 6: case 9: case 11:
        if (day >= 1 and day <= 30)
        {
            valid = true;
        } else valid = false;
        break;
    case 2:
        if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))
        {
            if (day >= 1 and day <= 29)
            {
                valid = true;
            } else valid = false;
            
        } else if (day >= 1 and day <= 28)
        {
            valid = true;
        } else valid = false;
        break;
    default:
        valid = false;
        break;
    }

    // Output
    if (valid == true)
    {
        cout << "Ngay thang nam hop le!\n";
    } else cout << "Ngay thang nam khong hop le!\n";
    
    return 0;
}

int main() {
    do
    {
        checkDate();
    } while (checkDate() == 0);
    
    
}

