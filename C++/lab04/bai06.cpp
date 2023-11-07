#include <iostream>
using namespace std;

    // Nhập vào điểm trung bình (từ 0…10) các môn học của một sinh viên. Nếu điểm số
    // lớn hơn 10 yêu cầu nhập lại. Nếu điếm số nhỏ hơn 0, dừng quá trình nhập, và in ra
    // số lượng môn học và điểm trung bình của sinh viên.
    // Kết quả ví dụ:
    // Diem mon hoc 1: 7
    // Diem mon hoc 2: 11
    // Nhap lai diem mon hoc 2 (trong khoang tu 0..10): 1
    // Diem mon hoc 3: -5
    // So mon hoc: 2
    // Diem trung binh cua 2 mon hoc: 4

int main() {
    int count = 1, diem, tong = 0;
    do
    {
        cout << "Diem mon hoc " << count << ": ";
        cin >> diem;
        while (diem > 10 or !cin.good())
        {
            if (!cin.good())
            {
                cin.clear();
                fflush(stdin);
            }         
            cout << "Nhap lai diem mon hoc " << count << " (trong khoang tu 0..10): ";
            cin >> diem;
        }
        if (diem < 0) break;
        tong += diem;
        count++;
    } while (diem >= 0);

    double diemTB = tong / (double) count;

    cout << "So mon hoc: " << count << '\n'
         << "Diem trung binh cua " << count << " mon hoc: " << diemTB << '\n';
    
    return 0;
}