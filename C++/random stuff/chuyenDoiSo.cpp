#include <iostream>
#include <math.h>
using namespace std;

    // Bài toán: Chuyển đổi số từ 1 trong 4 hệ thập phân, hệ nhị phân, hệ hex, hệ bát phân sang 1 trong
    // các hệ số còn lại

long long OctToDec(long long oct) {
    int i = 0;
    long long dec = 0;
    while (oct > 0)
    {
        dec = dec + (oct % 10)*(pow(8, i));
        oct = oct/10;
        i++;
    }
    return dec;   
}

long long BinToDec(string bin) {
    long long dec = 0;
    for (int i = 0; i < bin.length(); i++)
    {
        dec = dec + stoi(bin.substr(i,1))*(pow(2, bin.length()-1-i));
    }
    return dec;
}

long long HexToDec(string hex) {
    long long dec = 0;
    for (int i = 0; i < hex.length(); i++)
    {
        if (hex[i] == 'A')
        {
            dec = dec + 10*(pow(16, hex.length()-1-i));
        }
        else if (hex[i] == 'B')
        {
            dec = dec + 11*(pow(16, hex.length()-1-i));
        }
        else if (hex[i] == 'C')
        {
            dec = dec + 12*(pow(16, hex.length()-1-i));
        }
        else if (hex[i] == 'D')
        {
            dec = dec + 13*(pow(16, hex.length()-1-i));
        }
        else if (hex[i] == 'E')
        {
            dec = dec + 14*(pow(16, hex.length()-1-i));
        }
        else if (hex[i] == 'F')
        {
            dec = dec + 15*(pow(16, hex.length()-1-i));
        } else {
            dec = dec + stoi(hex.substr(i,1))*(pow(16, hex.length()-1-i));
        }      
    }
    return dec;
}

string DecToOct(long long dec) {
    string oct;
    while (dec != 0)
    {
        oct.insert(0,to_string(dec % 8));
        dec /= 8;
    }
    return oct;
}

string DecToBin(long long dec) {
    string bin;
    while (dec != 0)
    {
        bin.insert(0,to_string(dec % 2));
        dec /= 2;
    }
    return bin;
}

string DecToHex(long long dec) {
    string hex;
    while (dec != 0)
    {
        switch (dec % 16)
        {
        case 10:
            hex.insert(0,"A");
            break;
        case 11:
            hex.insert(0,"B");
            break;
        case 12:
            hex.insert(0,"C");
            break;
        case 13:
            hex.insert(0,"D");
            break;
        case 14:
            hex.insert(0,"E");
            break;
        case 15:
            hex.insert(0,"F");
            break;        
        default:
            hex.insert(0,to_string(dec % 16));
            break;
        }
        dec /= 16;
    }
    return hex;
}

int main() {
    cout << "********** Chuyen doi so **********\n";
    cout << "Cac he so:\n1. He so thap phan (10)\n2. He so bat phan (8)\n3. He so nhi phan (2)\n4. He so hex (16)\n";   
    int typeInput, typeOutput;
    do
    {
        cin.clear();
        fflush(stdin);
        cout << "Chon he so cua so nhap vao (1 - 4): ";
        cin >> typeInput;
    } while (typeInput > 4 or typeInput < 1 or !cin.good());

    long long trungGian, inputLong;
    string input, inputString;

    switch (typeInput)
    {
    case 1:
        do
        {
            cin.clear();
            fflush(stdin);
            cout << "Nhap so dau vao: ";
            cin >> inputLong;
        } while (inputLong < 0 or !cin.good());
        input = to_string(inputLong);
        trungGian = inputLong;      
        break;
    case 2:
        do
        {
            cin.clear();
            fflush(stdin);
            cout << "Nhap so dau vao: ";
            cin >> inputLong;
        } while (inputLong < 0 or !cin.good());
        input = to_string(inputLong);
        trungGian = OctToDec(inputLong);      
        break;
    case 3:
        {
        do
        {
            cin.clear();
            fflush(stdin);
            cout << "Nhap so dau vao: ";
            cin >> inputString;
        } while (!cin.good());
        input = inputString;
        trungGian = BinToDec(inputString);      
        break;}
    case 4:
        {
        do
        {
            cin.clear();
            fflush(stdin);
            cout << "Nhap so dau vao: ";
            cin >> inputString;
        } while (!cin.good());
        input = inputString;
        trungGian = HexToDec(inputString);      
        break;}
    }

    // Chon he so xuat ra
    do
    {
        cin.clear();
        fflush(stdin);
        cout << "Chon he so chuyen doi (1 - 4): ";
        cin >> typeOutput;
    } while (typeOutput > 4 or typeOutput < 1 or !cin.good());

    cout << "Ket qua:\n\t";
    switch (typeInput)
    {
    case 1:
        cout << input << " (10) -> ";
        break;
    case 2:
        cout << input << " (8) -> ";
        break;
    case 3:
        cout << input << " (2) -> ";
        break;
    case 4:
        cout << input << " (16) -> ";
        break;
    }

    switch (typeOutput)
    {
    case 1:
        cout << trungGian << " (10)\n";
        break;
    case 2:
        cout << DecToOct(trungGian) << " (8)\n";
        break;
    case 3:
        cout << DecToBin(trungGian) << " (2)\n";
        break;
    case 4:
        cout << DecToHex(trungGian) << " (16)\n";
        break;
    }
    system("PAUSE");
    return 0;
}