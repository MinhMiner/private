#include <iostream>
using namespace std;

    // Xác định kết quả của từng dòng mệnh lệnh trong hàm void th04bt01()

void th04bt01()
{
    int count, n, m, x, log, i;
    // cac doan lenh sau in ra gi
	count = 3; while (count-- > 0) cout << count << " "; // In 2 1 0 trên 1 dòng
    count = 3; while (--count > 0) cout << count << " "; // In 2 1 cùng dòng với đoạn lệnh trước
    n = 1; do cout << n << " "; while (n++ <= 3); // In 1 2 3 4 cùng dòng với câu lệnh trước
    n = 1; do cout << n << " "; while (++n <= 3); // In 1 2 3 cùng dòng với câu lệnh trước
    x = 10; while (x > 0) { cout << x << endl; x = x - 3; } // In 10 7 4 1, sau mỗi số xuống dòng mới
    x = 10; do { cout << x << endl; x = x - 3; } while (x > 0); // In 10 7 4 1, sau mỗi số xuống dòng mới
    x = -42; do { cout << x << endl; x = x - 3; } while (x > 0); // In số -42 trên dòng mới
    for (int count = 1; count < 5; count++) cout << (2 * count) << " "; // In 2 4 6 8 trên dòng mới
    for (int n = 10; n > 0; n = n - 2) { cout << "Hello "; cout << n << endl; } // In Hello 10, Hello 8, Hello 6, Hello 4, Hello 2, sau mỗi lần in xuống dòng mới
    for (double sample = 2; sample > 0; sample = sample - 0.5) cout << sample << " "; // In 2 1.5 1 0.5 trên dòng mới
    n = 1024; log = 0; for (int i = 1; i < n; i = i * 2)  log++; cout << n << " " << log << endl; // In 1024 10 cùng dòng với đoạn lệnh trước
    n = 1024; log = 0; for (int i = 1; i < n; i = i * 2); log++; cout << n << " " << log << endl; // In 1024 1 trên dòng mới
    n = 1024; log = 0; for (int i = 0; i < n; i = i * 2); log++; cout << n << " " << log << endl; // Vòng lặp vô hạn, không in ra kết quả gì, chương trình không thể tiếp tục các câu lệnh ở sau
    x = 10; while (x > 0) { cout << x << endl; x = x + 3; } // In liên tục 10 13 16 19 ... Vòng lặp vô hạn
    for (n = 1; n <= 10; n++) for (m = 10; m >= 1; m--) cout << n << " times " << m << " = " << n*m << endl; // In bảng cửu chương 1 đến 10

    // viet lai 3 doan lenh sau su dung vong lap for
    // i = 1; while(i <= 10) { if (i < 5 && i != 2) cout << 'X'; i++; }
    for (size_t i = 1; i <= 10; i++)
        if (i < 5 && i != 2)
            cout << 'X';
    
    // i = 1; while(i <= 10) { cout << 'X'; i = i + 3; }
    for (size_t i = 1; i <= 10; i+=3)
        cout << 'X';
    
    // n = 100; do { cout << 'X'; n = n + 100; } while(n < 1000);
    for (size_t n = 100; n <= 1000; n+=100)
        cout << 'X';
}

int main() {
    th04bt01();
    return 0;
}