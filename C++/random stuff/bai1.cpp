#include <iostream>
using namespace std;

int main() {
    // Bài toán: Cho 1 hình có x hàng ngang, mỗi hàng ngang có y ô vuông 1x1, biết lề bên trái của hình là 1 cạnh thẳng.
    // Yêu cầu người dùng nhập số lượng hàng ngang và số lượng ô vuông của mỗi hàng, chương trình in ra hình vẽ minh họa
    // và diện tích của hình chữ nhật lớn nhất trong hình đó.

    // INPUT
    cout << "Nhap so luong hang ngang: ";
    int soHangNgang;
    cin >> soHangNgang;
    int a[soHangNgang+1];
    for (int i = 1; i <= soHangNgang; i++)
    {
        cout << "   Nhap so luong o vuong cua hang thu " << i << ": ";
        cin >> a[i];
    }
    
    // Vẽ hình minh họa
    cout << "Hinh ve minh hoa:\n         ";
    for (int i = 1; i <= soHangNgang; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            cout << "#";
        }
        cout << "\n         ";       
    }

    // Tính diện tích hình chữ nhật lớn nhất
    int b[soHangNgang+1], canTren, canDuoi;
    for (int i = 1; i <= soHangNgang; i++)
    {
        canTren = i - 1;
        while (canTren > 0 and a[canTren] >= a[i])
        {
            canTren--;
        }
        canDuoi = i + 1;
        while (canDuoi < soHangNgang + 1 and a[canDuoi] >= a[i])
        {
            canDuoi++;
        }

        b[i] = a[i]*(canDuoi - canTren - 1);  
    }

    b[0] = 0;
    for (int i = 1; i <= soHangNgang; i++)
    {
        if (b[i] > b[0])
        {
            b[0] = b[i];
        }        
    }

    cout << "\n   Dien tich hinh chu nhat lon nhat la: " << b[0];
    
return 0;
}