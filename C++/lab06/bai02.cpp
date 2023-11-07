#include <iostream>
#include <vector>
using namespace std;

    // Viết hàm thực hiện các công việc sau:
    // i. Nhập vào dãy số N phần tử
    // ii. Tính tổng các phần tử chẵn của dãy vừa nhập
    // iii. Tính số lượng các phần tử lẻ của dãy vừa nhập
    // iv. Tìm các phần tử lặp của dãy vừa nhập
    // v. Đảo ngược dãy vừa nhập
    // vi. Đảo các phần tử chẵn lên đầu và phần tử lẻ xuống cuối dãy
    // vii. Loại các phần tử chia hết cho 3 khỏi dãy.

int tongSoChan(int daySo[], int n);
int countSoLe(int daySo[], int n);
void timPhanTuLap(int daySo[], int n);
void daoNguocDay(int daySo[], int n);
void sapXep(int daySo[], int n);
void loaiChia3(int daySo[], int n);

int main() {
    int n;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    int daySo[n - 1];
    for (size_t i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> daySo[i];
    }
    cout << "Tong cac phan tu chan la: " << tongSoChan(daySo, n) << '\n'
         << "So luong cac phan tu le la: " << countSoLe(daySo, n) << '\n';
    timPhanTuLap(daySo, n);
    daoNguocDay(daySo, n);
    sapXep(daySo, n);
    loaiChia3(daySo, n);
    return 0;
}


int tongSoChan(int daySo[], int n) {
    int tong = 0;
    for (size_t i = 0; i < n; i++)
        if (daySo[i] % 2 == 0)
            tong += daySo[i];
    return tong; 
}

int countSoLe(int daySo[], int n) {
    int count = 0;
    for (size_t i = 0; i < n; i++)
        if (daySo[i] % 2 == 1)
            count++;
    return count;
}

void timPhanTuLap(int daySo[], int n) {
    vector<int> dayLap;     // Khai báo 1 dãy lặp để chứa các phần tử lặp
    size_t k;
    for (size_t i = 0; i < n; i++)
        for (size_t j = i + 1; j < n; j++)
            if (daySo[i] == daySo[j])   // Tìm 2 phần tử trùng nhau trong dãy
            {
                for (k = 0; k < dayLap.size(); k++)     // Kiểm tra xem phần tử đó có trong dãy lặp hay chưa
                    if (dayLap[k] == daySo[i])
                        break;
                if (k == dayLap.size())     // Nếu chưa có trong dãy lặp thì thêm phần tử đó vào dãy lặp
                    dayLap.push_back(daySo[i]); 
            }  

    // In các phần tử của dãy lặp
    if (dayLap.size() == 0)
        cout << "Day nay khong co phan tu trung lap nao\n";
    else {
        cout << "Cac phan tu lap cua day la: ";
        for (size_t i = 0; i < dayLap.size(); i++)
            cout << dayLap[i] << ' ';
        cout << '\n';
    }
}

void daoNguocDay(int daySo[], int n) {
    cout << "Day dao nguoc: ";
    for (int i = n - 1; i >= 0; i--)
        cout << daySo[i] << ' ';
    cout << '\n';
}

void sapXep(int daySo[], int n) {
    vector<int> sapXep;
    for (size_t i = 0; i < n; i++)
    {
        if (daySo[i] % 2 == 0)
            sapXep.insert(sapXep.begin(), daySo[i]);
        else sapXep.push_back(daySo[i]);
    }
    cout << "Dao cac phan tu chan len dau: ";
    for (size_t i = 0; i < sapXep.size(); i++)
        cout << sapXep[i] << ' ';
    cout << '\n';   
}

void loaiChia3(int daySo[], int n) {
    cout << "Loai cac phan tu chia het cho 3 khoi day: ";
    for (size_t i = 0; i < n; i++)
        if (daySo[i] % 3 != 0)
            cout << daySo[i] << ' ';
    cout << '\n';
}