#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	// Переменные:
	int a, b, c, d;
	std::cout << "Введите вот это a: ";
	std::cin >> a;

	std::cout << "Введите пожалуйста это b: ";
	std::cin >> b;
	
	std::cout << "Введите пожалуйста это c: ";
	std::cin >> c;
	
	std::cout << "Введите пожалуйста это d: ";
	std::cin >> d;

	std::cout << "A: " << a << ". B: " << b << ". C: " << c << ". D: " << d;

	// Типы данных:
	short test = 17;
	int test2 = 18;
	long test3 = 20;

	unsigned short test4 = 17;
	unsigned int test5 = 18;
	unsigned long test6 = 20;

	// Числа с точкой:
	float test7 = 2.245678f;
	float test8 = 2.2f;
	double test9 = 9890.1234567f;

	// Сейв символ:
	char symvol = '$';
	char symvol1 = '^';
	char symvol2 = '&';

	bool isHappyItfalse = false;
	bool isHappyItTrue = true;

	// soming soon

	return 0;
}