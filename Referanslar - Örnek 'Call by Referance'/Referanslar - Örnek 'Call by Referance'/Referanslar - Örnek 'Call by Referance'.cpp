#include <iostream>
#include <locale>
using namespace std;

void c_swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void r_swap(int& r1, int& r2) {
	int temp = r1;
	r1 = r2;
	r2 = temp;
}
int main()
{
	setlocale(LC_ALL, "Turkish");

	int x = 7, y = 9;
/*--------------------------------------------------------------------------------------------------------------------*/
	cout << "Pointer ile sayı değiştirme işlemi -->\nX = " << x << "\t Y = " << y << endl;

	c_swap(&x, &y);

	cout << "X = " << x << "\t Y = " << y << endl;
/*--------------------------------------------------------------------------------------------------------------------*/
	cout << "Referans ile sayı değiştirme işlemi -->\nX = " << x << "\t Y = " << y << endl;

	r_swap(x, y);

	cout << "X = " << x << "\t Y = " << y << endl;
/*--------------------------------------------------------------------------------------------------------------------*/
}

