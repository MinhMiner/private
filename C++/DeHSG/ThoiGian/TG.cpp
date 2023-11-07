#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input;
    ofstream output;
    input.open("TG.INP");
    output.open("TG.OUT");

    int soThiSinh, thoiGian;
    int gio, phut;
    input >> soThiSinh;
    for (int i = 0; i < soThiSinh; i++)
    {
        input >> thoiGian;
        gio = 8;
        phut = thoiGian;
        if (phut >= 60)
        {
            phut -= 60;
            gio += 1;
            
        }
        if (gio < 10)
        {
            output << '0';
        }
        output << gio << ':';
        if (phut < 10)
        {
            output << '0';
        }
        output << phut << '\n';      
    }
    

    return 0;
}