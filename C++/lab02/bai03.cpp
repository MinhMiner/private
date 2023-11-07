#include <iostream>
using namespace std;

int main() {
    bool a = 1 + 3 < 2 * 4 - 1 && 1;
    bool b = 2 * 2 - 1 + 5 / 1 && 4 - 3;
    bool c = (2 - 3 * 1) && 0 / 5 * 2 + 1;
    int x = 1, y = 2; bool d = x++ < y;
    x = 2; y = 1; bool e = x-- < y++;
    x = 2; y = 2; bool f = x++ == y;

    cout << "a. " << a << '\n';
    cout << "b. " << b << '\n';
    cout << "c. " << c << '\n';
    cout << "d. " << d << '\n';
    cout << "e. " << e << '\n';
    cout << "f. " << f << '\n';


    return 0;
}