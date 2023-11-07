#include <iostream>
#include <cmath>

using namespace std;

void th04bt01()
{
    int count, n, m, x, log, i;
    // cac doan lenh sau in ra gi
	count = 3; while (count-- > 0) cout << count << " ";
    count = 3; while (--count > 0) cout << count << " ";
    n = 1; do cout << n << " "; while (n++ <= 3);
    n = 1; do cout << n << " "; while (++n <= 3);
    x = 10; while (x > 0) { cout << x << endl; x = x - 3; }
    x = 10; do { cout << x << endl; x = x - 3; } while (x > 0);
    x = -42; do { cout << x << endl; x = x - 3; } while (x > 0);
    for (int count = 1; count < 5; count++) cout << (2 * count) << " ";
    for (int n = 10; n > 0; n = n - 2) { cout << "Hello "; cout << n << endl; }
    for (double sample = 2; sample > 0; sample = sample - 0.5) cout << sample << " ";
    n = 1024; log = 0; for (int i = 1; i < n; i = i * 2)  log++; cout << n << " " << log << endl;
    n = 1024; log = 0; for (int i = 1; i < n; i = i * 2); log++; cout << n << " " << log << endl;
    n = 1024; log = 0; for (int i = 0; i < n; i = i * 2); log++; cout << n << " " << log << endl;
    x = 10; while (x > 0) { cout << x << endl; x = x + 3; }
    for (n = 1; n <= 10; n++) for (m = 10; m >= 1; m--) cout << n << " times " << m << " = " << n*m << endl;

    // viet lai 3 doan lenh sau su dung vong lap for
    i = 1; while(i <= 10) { if (i < 5 && i != 2) cout << 'X'; i++; }
    i = 1; while(i <= 10) { cout << 'X'; i = i + 3; }
    n = 100; do { cout << 'X'; n = n + 100; } while(n < 1000);
}

void th04bt02_inUocSo(int soND)
{
    // in ra cac uoc so cua soND
    return ;
}

bool th04bt02_laSoNguyenTo(int soND)
{
    // neu la so nguyen to, tra ve dung
    // neu khong tra ve sai
    return false;
}

bool th04bt02_laSoChinhPhuong(int soND)
{
    // neu la so chinh phuong, tra ve dung
    // neu khong tra ve sai
    return false;
}

int th04bt02_tongCS(int soND)
{
    // tra ve tong cac chu so cua soND
    return 0;
}

int th04bt02_tongSoLe(int soND)
{
    // tra ve tong cac so le nho hon soND
    return 0;
}

int th04bt02_tichSoChan(int soND)
{
    // tra ve tich cac so chan nho hon soND
    return 0;
}

int th04bt02_soDaoNguoc(int soND)
{
    // tra ve so dao nguoc cua soND
    return 0;
}

int th04bt02_soNhiPhan(int soND)
{
    // tra ve so o he nhi phan cua soND
    return 0;
}

void th04bt03_inUocSoChung(int soND1, int soND2)
{
    // in ra cac uoc so chung cua soND1 va soND2
    return ;
}

int th04bt03_uocChungLonNhat(int soND1, int soND2)
{
    // tra ve uoc so chung lon nhat cua soND1 va soND2
    return 1;
}

int th04bt03_boiChungNhoNhat(int soND1, int soND2)
{
    // tra ve boi so chung nho nhat cua soND1 va soND2
    return 1;
}

bool th04bt03_nguyenToCungNhau(int soND1, int soND2)
{
    // tra ve dung neu 2 so nguyen to cung nhau
    // neu khong tra ve sai
    return false;
}

int main()
{
	//th04bt01();
	return 0;
}
