#include <iostream>
using namespace std;

    // Nhập vào 2 xâu ký tự. Viết hàm kiểm tra xem hai xâu có bằng nhau không.

bool kiemTra(string a, string b);

int main() {
    string a, b;
    cout << "Nhap xau ky tu thu nhat: ";
    cin >> a;
    cout << "Nhap xau ky tu thu hai: ";
    cin >> b;
    if (kiemTra(a, b))
        cout << "Hai xau ky tu bang nhau\n";
    else cout << "Hai xau ky tu khac nhau\n";
    
    return 0;
}


bool kiemTra(string a, string b) {
    if (a.length() == b.length())
        {
        for (size_t i = 0; i < a.length(); i++)
            if (a[i] != b[i])
                return false;
        return true;
        }
    else return false;
}