#include <iostream>
#include <ctime>
using namespace std;

void game() {
    // 1 4 = Keo; 2 5 = Bua; 3 6 = Bao

    // RNG
    srand(time(NULL));
    int bot = rand() % 3 + 1;

    // Nguoi choi nhap input
    string input;
    cout << "Nhap 1 trong 3 (Keo, Bua, Bao): ";
    getline(cin >> ws, input);

    // Xu li input thanh so lieu
    int player;
    if (input == "Keo")
    {
        player = 4;
    } else if (input == "Bua")
    {
        player = 5;
    } else if (input == "Bao")
    {
        player = 6;
    } else cout << "Khong hop le!";

    cout << "Ban da chon " << input << "!\n";

    // Xu li so ngau nhien thanh lua chon cua bot
    switch (bot)
    {
    case 1:
        cout << "May tinh da chon Keo!\n";
        break;
    case 2:
        cout << "May tinh da chon Bua!\n";
        break;
    case 3:
        cout << "May tinh da chon Bao!\n";
        break;
    default:
        break;
    }
    
    // Tinh toan ket qua
    int result = (player - bot) % 3;
    switch (result)
    {
    case 0:
        cout << "   Ket qua hoa!\n";
        break;
    case 1:
        cout << "   Ban da chien thang!\n";
        break;
    case 2:
        cout << "   Ban da thua!\n";
        break;
    default:
        break;
    }
    
    
    
}

int main(){
    while(1 == 1)
    {
        game();
    }
}