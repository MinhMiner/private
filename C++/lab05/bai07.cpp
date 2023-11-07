#include <iostream>
#include <ctime>
using namespace std;

    // Máy tính nghĩ ra một số trong khoảng từ 1 đến 1000. Người chơi phải đoán số mà
    // máy vừa nghĩ. Ví dụ:
    // tôi vừa nghĩ ra một số trong khoảng từ 1 đến 1000
    // hãy đoán số đó? 357
    // tuyệt vời, bạn đoán ra ngay số đó
    // muốn chơi tiếp không (c hoặc k)? c
    // tôi vừa nghĩ ra một số trong khoảng từ 1 đến 1000
    // hãy đoán số đó? 500
    // quá lớn … hãy đoán số đó? 200
    // quá nhỏ … hãy đoán số đó? 290
    // hơi nhỏ … hãy đoán số đó? 380
    // hơi lớn … hãy đoán số đó? 350
    // gần rồi đó … hãy đoán số đó? 340
    // rất gần rồi đó … hãy đoán số đó? 330
    // gần lắm rồi đó … hãy đoán số đó? 333
    // đúng rồi !!! 333
    // đoán 8 lần mới ra =))
    // muốn chơi tiếp không (c hoặc k)?

int rng();
void doanSo();

int main() {
    srand(time(NULL));
    char tiep;
    do
    {
        doanSo();
        again: cout << "Muon choi tiep khong (c hoac k)? ";
        cin >> tiep;
        if (tiep != 'c' && tiep != 'k' && tiep != 'C' && tiep != 'K')
        {
            cout << "Lua chon khong hop le\n";
            goto again;
        }
    } while (tiep == 'c' || tiep == 'C');
    return 0;
}


int rng() {
    return rand() % 1000 + 1;
}

void doanSo() {
    int ketQua = rng(), count = 0, doan;
    cout << "Toi vua nghi ra mot so trong khoang tu 1 den 1000\n";
    do
    {
        cout << "Hay doan so do? ";
        count++;
        cin >> doan;
        if (!cin.good())
        {
            cin.clear();
            fflush(stdin);
            cout << "Do khong phai la 1 so ... ";
            continue;
        }
        
        if (doan == ketQua)
            break;
        else if (doan - ketQua >= 100)
            cout << "Qua lon ... ";
        else if (doan - ketQua >= 20)
            cout << "Hoi lon ... ";
        else if (doan - ketQua >= 10)
            cout << "Gan roi do ... ";
        else if (doan - ketQua >= 5)
            cout << "Rat gan roi do ... ";
        else if (doan - ketQua >= 1)
            cout << "Gan lam roi do ... ";
        else if (ketQua - doan >= 100)
            cout << "Qua nho ... ";
        else if (ketQua - doan >= 20)
            cout << "Hoi nho ... ";
        else if (ketQua - doan >= 10)
            cout << "Gan roi do ... ";
        else if (ketQua - doan >= 5)
            cout << "Rat gan roi do ... ";
        else
            cout << "Gan lam roi do ... ";      
    } while (doan != ketQua);

    if (count == 1)
        cout << "Tuyet voi, ban doan ra ngay so do!\n";
    else cout << "Dung roi !!! " << ketQua << '\n'
              << "Doan " << count << " lan moi ra =)))" << '\n';
}