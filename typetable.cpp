#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

/* TODO
Используя заголовочный файл <limits>, std::cout, sizeof() и управляющие последовательности
cоставьте следующую таблицу
	Тип переменной		|    Размер,	|	    Значение	 	 |  Количество
				|     байт	|  Минимальное	|  Максимальное  | значимых бит
	-------------------------------------------------------------------------------------------
	bool			|	1	|     false	|      true      |	1
	unsigned short		|	2	|	0	|      65535	 |	16
	short
	unsigned int
	int
	unsigned long
	long
	unsigned long long
	long long
	char
	float
	double
для справки использовать http://www.cplusplus.com/reference/limits/numeric_limits/
*/
int main()
{
	setlocale(0, ""); // включение адекватного отображения кириллицы в консоль
	std::cout << std::boolalpha; // настройка консоли, вывод булевых типов как true / false
	sizeof(int); // возвращает байтовый размер переменной типа int
	std::numeric_limits<int>::max(); // возвращает максимальное значение которое может хранить переменная типа int
	std::numeric_limits<int>::min(); // возвращает минимальное значение которое может хранить переменная типа int
	std::numeric_limits<int>::digits; // возвращает количество значимых бит переменной типа int

	cout << left << "Тип переменной" << setw(6) << "" << "|" << setw(3) << "" << "Размер" << setw(2) << "" << "|" << setw(18) << "" << "Значение" << setw(18) << "" << "|" << setw(2) << "" << "Количество" << setw(2) << "" << "|" << endl;
	cout << setw(20) << "" << setw(4) << "|" << "байт" << setw(4) << "" << "|" << setw(5) << "" << "минимальное" << setw(5) << "" << "|" << setw(5) << "" << "максимальное" << setw(5) << "" << "|" << setw(1) << "" << "значимых бит" << setw(1)<< "" << "|" << endl;
	cout << setw(10) << endl;
	cout << left << setw(20) << "bool" << setw(6) << "|" << setw(5) << sizeof(bool) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<bool>::min() << setw(15) << "" << "|" << setw(1) << "" << std::numeric_limits<bool>::max() << setw(17) << "" << "|" << setw(1) << "" << numeric_limits<bool>::digits << setw(12) << "" << "|" << endl;
	cout << left << setw(20) << "unsigned short" << setw(6) << "|" << setw(5) << sizeof(unsigned short) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned short>::min() << setw(19) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned short>::max() << setw(16) << "" << "|" << setw(1) << "" << numeric_limits<unsigned short>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "short" << setw(6) << "|" << setw(5) << sizeof(short) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<short>::min() << setw(14) << "" << "|" << setw(1) << "" << std::numeric_limits<short>::max() << setw(16) << "" << "|" << setw(1) << "" << numeric_limits<short>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "unsigned int" << setw(6) << "|" << setw(5) << sizeof(unsigned int) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned int>::min() << setw(19) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned int>::max() << setw(11) << "" << "|" << setw(1) << "" << numeric_limits<unsigned int>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "int" << setw(6) << "|" << setw(5) << sizeof(int) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<int>::min() << setw(9) << "" << "|" << setw(1) << "" << std::numeric_limits<int>::max() << setw(11) << "" << "|" << setw(1) << "" << numeric_limits<int>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "unsigned long" << setw(6) << "|" << setw(5) << sizeof(unsigned long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long>::min() << setw(19) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long>::max() << setw(11) << "" << "|" << setw(1) << "" << numeric_limits<unsigned long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "long" << setw(6) << "|" << setw(5) << sizeof(long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<long>::min() << setw(9) << "" << "|" << setw(1) << "" << std::numeric_limits<long>::max() << setw(11) << "" << "|" << setw(1) << "" << numeric_limits<long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "unsigned long long" << setw(6) << "|" << setw(5) << sizeof(unsigned long long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long long>::min() << setw(19) << "" << "|" << setw(1) << "" << std::numeric_limits<unsigned long long>::max() << setw(1) << "" << "|" << setw(1) << "" << numeric_limits<unsigned long long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "long long" << setw(6) << "|" << setw(5) << sizeof(long long) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<long long>::min() << setw(0) << "" << "|" << setw(1) << "" << std::numeric_limits<long long>::max() << setw(2) << "" << "|" << setw(1) << "" << numeric_limits<long long>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "char" << setw(6) << "|" << setw(5) << sizeof(char) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<char>::min() << setw(19) << "" << "|" << setw(1) << "" << std::numeric_limits<char>::max() << setw(20) << "" << "|" << setw(1) << "" << numeric_limits<char>::digits << setw(12) << "" << "|" << endl;
	cout << left << setw(20) << "float" << setw(6) << "|" << setw(5) << sizeof(float) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<float>::min() << setw(9) << "" << "|" << setw(1) << "" << std::numeric_limits<float>::max() << setw(10) << "" << "|" << setw(1) << "" << numeric_limits<float>::digits << setw(11) << "" << "|" << endl;
	cout << left << setw(20) << "double" << setw(6) << "|" << setw(5) << sizeof(double) << setw(1) << "" << "|" << setw(1) << "" << std::numeric_limits<double>::min() << setw(8) << "" << "|" << setw(1) << "" << std::numeric_limits<double>::max() << setw(9) << "" << "|" << setw(1) << "" << numeric_limits<double>::digits << setw(11) << "" << "|" << endl;
}
