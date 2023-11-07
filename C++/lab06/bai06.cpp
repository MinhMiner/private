#include <iostream>
#include <algorithm>
using namespace std;

    // Nhập vào họ tên của 2 sinh viên. Viết hàm kiểm tra xem tên sinh viên nào đứng trước
    // trong danh sách sinh viên

int xepTruoc(string s1, string s2);

int main() {
    cout << "Nhap ho ten sinh vien thu nhat: ";
    string hoTen1;
    getline(cin, hoTen1);

    cout << "Nhap ho ten sinh vien thu hai: ";
    string hoTen2;
    getline(cin, hoTen2);
    string ten1, ten2;

    // Tạo xâu mới lấy TÊN từ HỌ VÀ TÊN
    for (int i = hoTen1.length() - 1; i >= 0; i--)
            if (hoTen1[i] == ' ')
            {
                ten1 = hoTen1.substr(i + 1);
                break;
            }
    for (int i = hoTen2.length() - 1; i >= 0; i--)
            if (hoTen2[i] == ' ')
            {
                ten2 = hoTen2.substr(i + 1);
                break;
            }
    
    // So sánh TÊN
    switch (xepTruoc(ten1, ten2))
    {
    case 1:
        cout << "Ho ten sinh vien " << hoTen1 << " xep truoc trong danh sach!\n";
        break;
    case 0:
        cout << "Ho ten sinh vien " << hoTen2 << " xep truoc trong danh sach!\n";
        break;
    case 2:     // Khi 2 TÊN giống nhau
        switch (xepTruoc(hoTen1, hoTen2))   // So sánh HỌ VÀ TÊN
        {
        case 1:
            cout << "Ho ten sinh vien " << hoTen1 << " xep truoc trong danh sach!\n";
            break;
        case 0:
            cout << "Ho ten sinh vien " << hoTen2 << " xep truoc trong danh sach!\n";
            break;
        case 2:
            cout << "Ho ten hai sinh vien nay giong nhau!\n";
        }
        break;
    }
    return 0;
}


int xepTruoc(string s1, string s2) {
    for (size_t i = 0; i < max(s1.length(), s2.length()); i++)
        if (s1[i] < s2[i])
            return 1;
        else if (s1[i] > s2[i])
            return 0;  
    return 2;
}