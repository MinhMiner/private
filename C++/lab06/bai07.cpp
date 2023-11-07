#include <iostream>
#include <algorithm>        // Lazy for now
#include <iomanip>
#include <vector>
using namespace std;

    // Viết chương trình đọc vào điểm Toán, Lý & Anh của các sinh viên. Chương trình cần
    // kiểm tra điểm số trong khoảng 0-10. Sắp xếp danh sách sinh viên dựa trên điểm
    // Toán, Anh và trung bình, ví dụ:
    // 1) Theo điểm môn Toán:
    //                  Toán    Lý      Anh
    // Sinh Vien 1      9.0     6.0     7.5
    // Sinh Vien 3      8.0     8.5     6.0
    // Sinh Vien 2      6.0     7.0     4.5
    // 2) Theo điểm môn Lý:
    //                  Toán    Lý      Anh
    // Sinh Vien 3      8.0     8.5     6.0
    // Sinh Vien 2      6.0     7.0     4.5
    // Sinh Vien 1      9.0     6.0     7.5
    // 3) Theo điểm trung bình:
    //                  TB      Toán    Lý      Anh
    // Sinh Vien 1      7.5     9.0     6.0     7.5
    // Sinh Vien 3      7.5     8.0     8.5     6.0
    // Sinh Vien 2      5.8     6.0     7.0     4.5

int main() {
    cout << "Nhap so luong sinh vien: ";
    int n;
    cin >> n;

    // diem[0][n] = TB; [1] = Toán; [2] = Lý; [3] = Anh
    vector<double> diem[0], diem1, diem2, diem3;
    double temp;
    
    cout << "Nhap diem Toan:\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << "\tSinh vien " << i + 1 << ": ";
        cin >> temp;
        diem1.push_back(temp);
    }
    cout << "Nhap diem Ly:\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << "\tSinh vien " << i + 1 << ": ";
        cin >> temp;
        diem2.push_back(temp);
    }
    cout << "Nhap diem Anh:\n";
    for (size_t i = 0; i < n; i++)
    {
        cout << "\tSinh vien " << i + 1 << ": ";
        cin >> temp;
        diem3.push_back(temp);
    }
    cout << *max_element(diem1.begin(), diem1.end());

    

    return 0;
}