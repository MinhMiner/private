#include <iostream>
using namespace std;

    // Viết chương trình tính điểm trung bình môn học của một sinh viên. Nhập vào số
    // lượng môn học, điểm số mỗi môn học (0,0…10,0), và hệ số mỗi môn học (1; 1,5; 2;
    // 2,5 hoặc 3). In ra tổng số môn học, tổng số hệ số, tổng số điểm số (sau khi đã nhân
    // với hệ số tương ứng) và điểm trung bình.
    // Kết quả ví dụ:
    // Tong so mon hoc can tinh DTB: 2
    // Diem mon hoc 1: 7
    // He so mon hoc 1: 1
    // Diem mon hoc 2: 3
    // He so mon hoc 2: 3
    // So mon hoc: 2
    // Tong so he so: 4
    // Tong so diem so: 16
    // Diem trung binh cua 2 mon hoc: 4

int main() {
    int soMonHoc;
    double diemSo, heSo, tongHeSo = 0, tongDiemSo = 0;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> soMonHoc;
    for (size_t i = 1; i <= soMonHoc; i++)
    {
        cout << "Diem mon hoc " << i << ": ";
        cin >> diemSo;
        cout << "He so mon hoc " << i << ": ";
        cin >> heSo;
        tongHeSo += heSo;
        tongDiemSo += diemSo * heSo;
    }

    cout << "So mon hoc: " << soMonHoc << '\n'
         << "Tong so he so: " << tongHeSo << '\n'
         << "Tong so diem so: " << tongDiemSo << '\n'
         << "Diem trung binh cua " << soMonHoc << " mon hoc: " << tongDiemSo / tongHeSo << '\n';
    
    return 0;
}