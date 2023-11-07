#include <iostream>
using namespace std;

    // Giả thiết có 2n lá bài, đánh số từ 1 đến 2n. Ban đầu các lá bài được sắp
    // theo thứ tự từ 1 đến 2n. Quy tắc trộn bài là như sau: sau một lần trộn bài
    // từ trật tự ban đầu ta có trật tự các bài là n+1, 1, n+2, 2, . . . ,2n, n. Như
    // vậy, n lá bài đầu tiên sẽ nằm ở các vị trí chẵn: 2, 4, 6, . . . , 2n. Các lá bài
    // còn lại sẽ ở các vị trí lẻ: 1, 3, 5, . . ., 2n-1. Với số nguyên n cho trước, sau
    // một số lần trộn, ta lại nhận được trình tự ban đầu của bộ bài. Hãy lập
    // trình xác định số lần trộn để có lại trình tự ban đầu và liệt kê các trạng
    // thái sau các lần trộn (cả trạng thái ban đầu).
    // Dữ liệu vào màn hình:
    // Nhập vào số nguyên dương n (n<200): 2
    // Kết quả ra màn hình:
    // Dòng đầu ghi số lần trộn để có lại trình tự ban đầu.
    // Các dòng tiếp theo liệt kê các trạng thái sau các lần trộn .
    // 4
    // 1 2 3 4
    // 3 1 4 2
    // 4 3 2 1
    // 2 4 1 3
    // 1 2 3 4

void shuffle(int deck[], int n, int m);
int soLanXao(int n);


int main() {
    cout << "Nhap vao so nguyen duong n (n < 200): ";
    int n;
    cin >> n;
    int deck[n * 2];
    for (size_t i = 0; i < n * 2; i++)
    {
        deck[i] = i + 1;
    }
    cout << soLanXao(n*2) << '\n';
    shuffle(deck, n * 2, soLanXao(n*2));
    return 0;
}


void shuffle(int deck1[], int n, int m) {
    int deck2[n]; 
    for (size_t j = 0; j < n; j++)
        cout << deck1[j] << ' ';
    cout << '\n';
      
    for (size_t i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (size_t j = 0; j < n/2; j++)
                deck2[j * 2 + 1] = deck1[j];               
            for (size_t j = n/2; j < n; j++)
                deck2[(j - (n/2)) * 2] = deck1[j]; 
            for (size_t j = 0; j < n; j++)
                cout << deck2[j] << ' ';              
        } else
        {
            for (size_t j = 0; j < n/2; j++)
                deck1[j * 2 + 1] = deck2[j];               
            for (size_t j = n/2; j < n; j++)
                deck1[(j - (n/2)) * 2] = deck2[j];  
            for (size_t j = 0; j < n; j++)
                cout << deck1[j] << ' '; 
        }
        cout << '\n';
    }   
}

int soLanXao(int n) {
    int i = 1;
    int count = 0;
    do
    {
        if (i <= n/2)
            i *= 2;
        else i = (i - (n/2 + 1)) * 2 + 1;
        count++;
    } while (i != 1);
    return count;
}