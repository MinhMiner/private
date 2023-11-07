#include <iostream>
using namespace std;

    // Nhập vào các số nguyên thể hiện cho điểm số của một lớp học. Quá trình nhập
    // dừng lại khi số nhập vào là một số âm. Thực hiện các việc sau:
    // 1. Tính số lượng sinh viên trong lớp
    // 2. Tính điểm trung bình của cả lớp
    // 3. Tìm điểm cao nhất và thấp nhất của lớp

int main() {
    int count = 0, tong = 0, min, max = 0, diem;
    cout << "Nhap diem cac sinh vien:\n";
    do
    {
        cin >> diem;
        if (diem < 0 or !cin.good()) break;
        count++;
        tong += diem;
        if (count == 1) min = diem;
        if (diem < min) min = diem;
        if (diem > max) max = diem;
    } while (diem >= 0);


    double diemTB = tong / (double) count;
    cout << "So luong sinh vien: " << count << '\n'
         << "Diem trung binh ca lop: " << diemTB << '\n'
         << "Diem cao nhat la: " << max << '\n'
         << "Diem thap nhat la: " << min << '\n';
    
    return 0;
}