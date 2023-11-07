#include <iostream>

void th03bt01()
{
	bool b;
	int x, y, count = 0, limit = 10;
	b = (count == 0) && (limit < 20);
	b = count == 0 && limit < 20;
	b = (limit > 20) || (count < 5);
	b = !(count == 12);
	b = (count == 1) && (x < y);
	b = (count < 10) || (x < y);
	b = !( ((count < 10) || (x < y)) && (count >= 0) );
	b = (limit < 20) || ((limit/count) > 7);
	b = (limit > 0) && ((limit/count++) > 7);
	b = (5 && 7) + (!6);
	b = ((limit/count++) >= 7) || (limit < 20);
	b = ((limit/count--) >= 7) && (limit < 0);
}

int main()
{
	// th03bt01();
	return 0;
}
