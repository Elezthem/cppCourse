#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");

	// ����������:
	int a, b, c, d;
	std::cout << "������� ��� ��� a: ";
	std::cin >> a;

	std::cout << "������� ���������� ��� b: ";
	std::cin >> b;
	
	std::cout << "������� ���������� ��� c: ";
	std::cin >> c;
	
	std::cout << "������� ���������� ��� d: ";
	std::cin >> d;

	std::cout << "A: " << a << ". B: " << b << ". C: " << c << ". D: " << d;

	// ���� ������:
	short test = 17;
	int test2 = 18;
	long test3 = 20;

	unsigned short test4 = 17;
	unsigned int test5 = 18;
	unsigned long test6 = 20;

	// ����� � ������:
	float test7 = 2.245678f;
	float test8 = 2.2f;
	double test9 = 9890.1234567f;

	// ���� ������:
	char symvol = '$';
	char symvol1 = '^';
	char symvol2 = '&';

	bool isHappyItfalse = false;
	bool isHappyItTrue = true;

	// soming soon

	return 0;
}