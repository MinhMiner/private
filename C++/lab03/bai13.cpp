#include <iostream>
#include <cstdlib>
#include <ctime>

int taoSoNgauNhien(int max)
{
	return rand() % max;
}
void duDoanDongXu() {
    // du doan dong xu
    const int DONG_XU = 2;
	std::cout << "** Tro choi du doan dong xu sap ngua **" << std::endl;
	std::cout << "Hay du doan dong xu sap (1) hay ngua (0): ";
	int du_doan; std::cin >> du_doan;

	int ket_qua = taoSoNgauNhien(DONG_XU);
    if (ket_qua == du_doan)
    {
    	std::cout << "Xin chuc mung, ban da doan dung!\n";
    	if (ket_qua) std::cout << "Dong xu sap, ban doan la sap\n";
    	else std::cout << "Dong xu ngua, ban doan la ngua\n";
    }
    else
    {
    	std::cout << "Rat tiec, ban da doan sai\n";
    	if (ket_qua) std::cout << "Dong xu sap, ban doan la ngua\n";
    	else std::cout << "Dong xu ngua, ban doan la sap\n";
    }
}
void duDoanXucSac() {
    // du doan xuc xac
	const int XUC_XAC = 6;
	std::cout << "** Tro choi du doan mat xuc xac **" << std::endl;
	std::cout << "Hay du doan mat xuc xac (1 - 6): ";
	int du_doan; std::cin >> du_doan;

	int ket_qua = taoSoNgauNhien(XUC_XAC) + 1;
    if (ket_qua == du_doan)
    {
    	std::cout << "Xin chuc mung, ban da doan dung!\n"
                  << "Xuc xac tung duoc mat " << ket_qua 
                  << ", ban da doan mat " << du_doan << '\n';
    }
    else
    {
    	std::cout << "Rat tiec, ban da doan sai\n"
    	          << "Xuc xac tung duoc mat " << ket_qua
                  << ", ban da doan mat " << du_doan << '\n';
    }
}
void duDoanXoSo() {
    // du doan xo so
	const int XO_SO = 100;
	std::cout << "** Tro choi du doan mat xo so **" << std::endl;
	std::cout << "Hay du doan xo so (00 - 99): ";
	int du_doan; std::cin >> du_doan;

	int ket_qua = taoSoNgauNhien(XO_SO);
    if (ket_qua == du_doan)    
    {
    	std::cout << "Xin chuc mung, ban da doan dung!\n"
                  << "Ket qua xo so la " << ket_qua
                  << ", ban da doan " << du_doan << '\n';
    }
    else
    {
    	std::cout << "Rat tiec, ban da doan sai\n"
    	          << "Ket qua xo so la " << ket_qua
                  << ", ban da doan " << du_doan << '\n';
    }
}
// void duDoanVietlott() {
//     // du doan xo so
// 	const int XO_SO = 100;
// 	std::cout << "** Tro choi du doan mat xo so **" << std::endl;
// 	std::cout << "Hay du doan xo so (00 - 99): ";
// 	int du_doan; std::cin >> du_doan;

// 	int ket_qua = taoSoNgauNhien(XO_SO);
//     if (ket_qua == du_doan)    
//     {
//     	std::cout << "Xin chuc mung, ban da doan dung!\n"
//                   << "Ket qua xo so la " << ket_qua
//                   << ", ban da doan " << du_doan << '\n';
//     }
//     else
//     {
//     	std::cout << "Rat tiec, ban da doan sai\n"
//     	          << "Ket qua xo so la " << ket_qua
//                   << ", ban da doan " << du_doan << '\n';
//     }
// }

int main()
{
	const int VIET_LOTT = 45;
    srand(time(0));

    std::cout << "Chon tro choi (1 - 3):\n"
         << "1. Du doan dong xu\n"
         << "2. Du doan xuc xac\n"
         << "3. Du doan xo so\n";
        //  << "4. Du doan Vietlott\n";
    int mode;
    std::cin >> mode;

    switch (mode)
    {
    case 1:
        duDoanDongXu();
        break;
    case 2:
        duDoanXucSac();
        break;
    case 3:
        duDoanXoSo();
        break;
    case 4:
    default:
        std::cout << "Lua chon khong hop le!\n";
        break;
    }
    
    return 0;
}

