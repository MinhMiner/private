#include <iostream>
using namespace std;

    // Khai báo và định nghĩa hàm in ra M dấu cách tiếp theo là N dấu sao trên cùng một
    // dòng. Nhập vào số dòng D muốn in. Sử dụng hàm vừa định nghĩa để in ra tam giác
    // hoa thị như sau:
    //     *
    //    ***
    //   *****
    //  *******
    // *********

void hangSao(int a, int b);

int main() {
    int dong;
    do
    {
        cin.clear();
        fflush(stdin);
        cout << "Nhap so dong muon in: ";
        cin >> dong;
    } while (dong < 1 or !cin.good());
    
    int cach[dong - 1], sao[dong - 1];
    for (size_t i = 0; i < dong; i++)
    {
        cout << "Dong " << i + 1 << ":\n"
             << "So dau cach: ";
        cin >> cach[i];
        cout << "So dau sao: ";
        cin >> sao[i];
    }

    // Nhap 5 4 1 3 3 2 5 1 7 0 9 de duoc thap hinh sao nhu de bai

    for (size_t i = 0; i < dong; i++)
        hangSao(cach[i], sao[i]);
    return 0;
}


void hangSao(int a, int b) {
    for (size_t i = 0; i < a; i++)
        cout << ' ';
    for (size_t i = 0; i < b; i++)
        cout << '*';
    cout << '\n';
}