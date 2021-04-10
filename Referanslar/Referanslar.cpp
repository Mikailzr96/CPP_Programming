#include <iostream>
#include <locale>
using namespace std;

/*
	C++'da, referans değişken adı verilen bir değişken tanımlayarak oluşturduğumuz değişenlere farklı bir isim ile erişim sağlayabiliriz.

	Referans bildirimi aşağıdaki şekilde yapılmaktadır:
		veri-türü& referans-adı = değişken-adı;

	-Referans değişkenlerinin bildirimi yapıldığında bir ilk değer verilmelidir. Ancak, bir sınıf içinde yer aldığında, bir fonksiyon 
	parametresi veya bir fonksiyon geri dönüş değeri olarak kullanıldığında bu kural geçerli değildir.

*/

int main()
{
	setlocale(LC_ALL, "Turkish");


	int id;
	int& rid = id; // Referans tanımı

	/*
	Referans oluşturulduğunda, bellekte herhangi bir değişiklik olmaz. Yani, rid referans değerini depolamak için bellek kullanılmaz. 
	Referans rid aslında id değişkeni için ikinci bir isim olarak kullanılır. Bu durumda, referans değeri kullandığımızda değişken adını 
	kullanmış gibi oluruz. id değerini değiştirmek rid değerini değiştirmek ve rid değerini değiştirmek id değerini değiştirmek anlamına gelir.
	*/

	id = 21;
	cout << id << "\t" << rid << endl;

	rid = 142;
	cout << id << "\t" << rid << endl;


}