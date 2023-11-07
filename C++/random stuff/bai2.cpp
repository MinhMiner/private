#include <iostream>
using namespace std;

    // Bài toán: Cho tọa độ 3 điểm A, B, C tạo thành 1 tam giác và điểm M.
    // Xác định xem điểm M nằm trong, nằm ngoài tam giác ABC hay nằm trên các cạnh của tam giác ABC.
    

int cungBen(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    double a = y2 - y1;
    double b = x1 - x2;
    double c = -a*x1-b*y1;
    if ((a*x3+b*y3+c)*(a*x4+b*y4+c) > 0)
    {
        return 0;
    } else if ((a*x3+b*y3+c)*(a*x4+b*y4+c) < 0)
    {
        return 1;
    } else return 2;
}

int main() {
    cout << "Nhap lan luot toa do 3 diem A, B, C: ";
    double xA,yA,xB,yB,xC,yC,xM,yM;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    cout << "A(" << xA << ";" << yA << ")\t" << "B(" << xB << ";" << yB << ")\t" 
         << "C(" << xC << ";" << yC << ")\n";
    if (cungBen(xA, yA, xB, yB, xC, yC, xC, yC) == 2)
    {
        cout << "Ba diem A, B, C thang hang!";
        return 0;
    }
    
    cout << "Nhap toa do diem M: ";
    cin >> xM >> yM;
    cout << "M(" << xM << ";" << yM << ")\n"; 

    if (cungBen(xA, yA, xB, yB, xC, yC, xM, yM) == 2)
    {
        cout << "Diem M nam tren canh AB";
    } else if (cungBen(xC, yC, xB, yB, xA, yA, xM, yM) == 2)
    {
        cout << "Diem M nam tren canh BC";
    } else if (cungBen(xA, yA, xC, yC, xB, yB, xM, yM) == 2)
    {
        cout << "Diem M nam tren canh AC";
    } else if (cungBen(xA, yA, xB, yB, xC, yC, xM, yM) == 0 and cungBen(xC, yC, xB, yB, xA, yA, xM, yM) == 0 and cungBen(xA, yA, xC, yC, xB, yB, xM, yM) == 0)
    {
        cout << "Diem M nam trong tam giac ABC";
    } else cout << "Diem M nam ngoai tam giac ABC";

    return 0;
}