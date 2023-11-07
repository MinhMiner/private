#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

    // Xây dựng chương trình tính phí đỗ xe thu được cho một nhà để xe. Phí đỗ xe là
    // 5000đ cho 3 tiếng đầu tiên. Sau 3 tiếng đầu tiên, phí đỗ xe là 2000đ/tiếng cho mỗi
    // tiếng đỗ xe tiếp theo. Phí đỗ xe tối đa được phép thu là 30000đ.
    // Khai báo và định nghĩa hàm tính phí đỗ xe cho một phương tiện, sử dụng chữ ký hàm
    //       int tinhPhiDoXe(double thoiGianDoXe)
    // Viết chương trình int main() tính phí đỗ xe thu được của nhà xe, dừng tính phí khi
    // nhập vào thời gian đỗ xe không dương. Sau đó in ra tổng phí thu được và tổng thời
    // gian các phương tiễn sử dụng nhà xe. Ví dụ;
    // Thời gian Phí
    // 1.5 5000
    // 4.0 7000
    // 15.0 29000
    // 16.0 30000
    // Tổng 36.5 71000

int tinhPhiDoXe(double thoiGianDoXe);

int main() {
    vector<double> thoiGian;
    double thoiGianDoXe;
    cout << "Nhap thoi gian do xe:\n";
    // Nhap thoi gian do xe den khi thoi gian nhap vao khong duong
    do
    {
        cin >> thoiGianDoXe;
        if (thoiGianDoXe <= 0 or !cin.good())
            break;        
        thoiGian.push_back(thoiGianDoXe);
    } while (thoiGianDoXe > 0);

    // In ra man hinh ket qua
    cout << left << setw(8) << " " << left << setw(12) << "Thoi gian" << "Phi" << endl;
    double tongThoiGian = 0, tongPhi = 0;
    for (size_t i = 0; i < thoiGian.size(); i++)
    {
        cout << left << setw(8) << " " << left << setw(12) << thoiGian[i] << tinhPhiDoXe(thoiGian[i]) << endl;
        tongThoiGian += thoiGian[i];
        tongPhi += tinhPhiDoXe(thoiGian[i]);
    }
    cout << left << setw(8) << "Tong" << left << setw(12) << tongThoiGian << tongPhi;    
    return 0;
}


int tinhPhiDoXe(double thoiGianDoXe) {
    if (thoiGianDoXe <= 3)
        return 5000;
    else if (thoiGianDoXe <= 15.5)
        return 5000 + (thoiGianDoXe - 3) * 2000;
    else return 30000;
}