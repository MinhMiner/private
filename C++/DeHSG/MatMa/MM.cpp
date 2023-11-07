#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream input;
    ofstream output;
    input.open("MM.INP");
    output.open("MM.OUT");
    string matMa;
    input >> matMa;
    vector<int> dayLap;
    int i = 0, j, k;
    string temp;
    while (i < matMa.length())
    {
        if (matMa[i] >= '0' && matMa[i] <= '9')
        {
            j = i + 1;
            while (matMa[j] >= '0' && matMa[j] <= '9')
                j++;
            temp = matMa.substr(i, j - i);
            for (k = 0; k < dayLap.size(); k++)     // Kiểm tra xem phần tử đó có trong dãy lặp hay chưa
                    if (dayLap[k] == stoi(temp))
                        break;
                if (k == dayLap.size())     // Nếu chưa có trong dãy lặp thì thêm phần tử đó vào dãy lặp
                    dayLap.push_back(stoi(temp));
            i = j;
        }
        else i++;
    }
    output << dayLap.size();
    input.close();
    output.close();
    return 0;
}