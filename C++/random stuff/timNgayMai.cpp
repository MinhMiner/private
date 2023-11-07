#include <iostream>
using namespace std;

bool validDate(int day, int month, int year) {
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
    return valid;
}

void ngayMai(int day, int month, int year) {
    day += 1;

    // Xu li
    bool validDay = true, validMonth = true;
    check: switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (day >= 1 and day <= 31)
        {
            validDay = true;
        } else validDay = false;        
        break;
    case 4: case 6: case 9: case 11:
        if (day >= 1 and day <= 30)
        {
            validDay = true;
        } else validDay = false;
        break;
    case 2:
        if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))
        {
            if (day >= 1 and day <= 29)
            {
                validDay = true;
            } else validDay = false;
            
        } else if (day >= 1 and day <= 28)
        {
            validDay = true;
        } else validDay = false;
        break;
    default:
        validMonth = false;
        break;
    }

    if (validDay == false)
    {
        day = 1;
        month += 1;
        goto check;
    }
    if (validMonth == false)
    {
        month = 1;
        year += 1;
    }

    // OUTPUT
    cout << "Ngay mai la ngay " << day << "/" << month << "/" << year;
}

void homQua(int day, int month, int year) {
    day -= 1;

    // Xu li
    bool validDay = true, validMonth = true;
    check: switch (month)
    {
    case 2: case 4: case 6: case 8: case 9: case 11: case 1:
        if (day != 0)
        {
            validDay = true;
        } else {
            validDay = false;
            day = 31;
            month -= 1;
        }      
        break;
    case 5: case 7: case 10: case 12:
        if (day != 0)
        {
            validDay = true;
        } else {
            validDay = false;
            day = 30;
            month -= 1;
        }
        break;
    case 3:
        if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0))
        {
            if (day != 0)
            {
                validDay = true;
            } else {
                validDay = false;
                day = 29;
                month -= 1;
            }
            
        } else if (day != 0)
        {
            validDay = true;
        } else {
            validDay = false;
            day = 28;
            month -= 1;
        }
        break;
    default:
        {
            validMonth = false;
            month = 12;
            year -= 1;
        }
        break;
    }

    if (validDay == false)
    {
        goto check;
    }
    if (validMonth == false)
    {
        goto check;
    }

    // OUTPUT
    cout << "Hom qua la ngay " << day << "/" << month << "/" << year;
}

int main() {
    // Input
    cout << "Nhap ngay theo dinh dang dd/mm/yyyy: ";
    string input;
    getline(cin >> ws, input);
    if (input.length() < 7)
    {
        cout << "Ngay thang nam khong hop le!\n";
        return 0;
    }
    
    int day = stoi(input.substr(0, 2));
    int month = stoi(input.substr(3, 2));
    int year = stoi(input.substr(6, input.length() - 5));

    if (validDate(day, month, year) == false)
    {
        cout << "Ngay thang nam khong hop le!\n";
        return 0;
    }

    int choice;
    do
    {
        cout << "Ban muon tim:\n1. Ngay mai\n2. Hom qua\nNhap (1 - 2): ";
        cin >> choice;
    } while (choice != 1 and choice != 2);

    if (choice == 1)
    {
        ngayMai(day, month, year);
    } else homQua(day, month, year);
    
    return 0;
}