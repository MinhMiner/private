#include <bits/stdc++.h>
using namespace std;

    // Viết hàm thực hiện các công việc sau:
    // i. Nhập vào dãy số N phần tử, mỗi phần tử trong khoảng từ 0 đến 9
    // ii. Đếm số lượng các số 0, 1, 2, …, 8, 9 của dãy vừa nhập

void demSo(int daySo[], int n);

int main() {
    int n;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    int daySo[n - 1];
    for (size_t i = 0; i < n; i++)
    {
        cout << "Nhap phan tu (0 - 9) thu " << i + 1 << ": ";
        cin >> daySo[i];
    }
    demSo(daySo, n);
    return 0;
}


void demSo(int daySo[], int n) {
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (size_t i = 0; i < n; i++)
        switch (daySo[i])
        {
        case 0:
            count[0]++;
            break;
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        case 6:
            count[6]++;
            break;
        case 7:
            count[7]++;
            break;
        case 8:
            count[8]++;
            break;
        case 9:
            count[9]++;
            break;
        default:
            break;
        }
    for (size_t i = 0; i < 10; i++)
        cout << "So luong so " << i << " trong day: " << count[i] << '\n';
}