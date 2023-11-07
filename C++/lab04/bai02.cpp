#include <iostream>
#include <cmath>
using namespace std;

    // Nhập vào 1 số nguyên dương, nhập lại nếu không phải. Thực hiện các việc sau:
    // 1. In ra các ước số của số đó
    // 2. Kiểm tra xem đó có phải số nguyên tố hay không
    // 3. Kiểm tra xem đó có phải số chính phương hay không
    // 4. Tính tổng các chữ số của số đó
    // 5. Với các số nguyên dương nhỏ hơn số đó, tính tổng các số lẻ và tích các số chẵn
    // 6. Tính số đảo ngược của số đó (ví dụ: 12345 tính ra 54321)
    // 7. Chuyển số đó sang số ở hệ nhị phân (ví dụ: 5 tính ra 101)

void inUocSo(int n);
bool laSoNguyenTo(int n);
bool laSoChinhPhuong(int n);
int tongCacChuSo(int n);
int tongCacSoLe(int n);
long double tichCacSoChan(int n);
int soDaoNguoc(int n);
string DecToBin(int n);

int main() {
    int n;
    do
    {
        cin.clear();
        fflush(stdin);
        cout << "Nhap 1 so nguyen duong: ";
        cin >> n;
    } while (!cin.good() or n <= 0);

    inUocSo(n);
    if (laSoNguyenTo(n))
        cout << n << " la so nguyen to\n";
    else cout << n << " khong phai la so nguyen to\n";
    if (laSoChinhPhuong(n))
        cout << n << " la so chinh phuong\n";
    else cout << n << " khong phai la so chinh phuong\n";
    cout << "Tong cac chu so cua " << n << " la: " << tongCacChuSo(n) << '\n';
    cout << "Tong cac so nguyen duong le nho hon " << n << " la: " << tongCacSoLe(n) << '\n';
    if (tichCacSoChan(n) == 0)
        cout << "Khong co so nguyen duong chan nao nho hon " << n << "!\n";
    else cout << "Tich cac so nguyen duong chan nho hon " << n << " la: " << tichCacSoChan(n) << '\n';
    cout << "So dao nguoc cua " << n << " la: " << soDaoNguoc(n) << '\n';
    cout << "Chuyen " << n << " sang he nhi phan: " << DecToBin(n) << '\n';
    return 0;
}



void inUocSo(int n) {
    if (n == 1)
    {
        cout << "Cac uoc so cua 1 la: 1\n";
    } else {
        cout << "Cac uoc so cua " << n << " la: ";
        for (size_t i = 1; i <= n / 2; i++)
            if (n % i == 0)
                cout << i << ' ';
        cout << n << endl;
    }
}

bool laSoNguyenTo(int n) {
    if (n == 1) return false;
    for (size_t i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool laSoChinhPhuong(int n) {
    if (sqrt(n) == (int) sqrt(n)) return true; 
        else return false;
}

int tongCacChuSo(int n) {
    int tong = 0;
    while (n != 0)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int tongCacSoLe(int n) {
    if (n == 1) return 1;
    int tong = 0;
    for (size_t i = 1; i < n; i+=2)
        tong += i;
    return tong;
}

long double tichCacSoChan(int n) {
    if (n == 1) return 0;
    long double tich = 1;
    for (size_t i = 2; i < n; i+=2)
        tich *= i;
    return tich;
}

int soDaoNguoc(int n) {
    int soNguoc = 0;
    while (n != 0)
    {
        soNguoc = soNguoc * 10 + n % 10;
        n /= 10;
    }
    return soNguoc;
}

string DecToBin(int n) {
    string bin;
    while (n != 0)
    {
        bin.insert(0,to_string(n % 2));
        n /= 2;
    }
    return bin;
}