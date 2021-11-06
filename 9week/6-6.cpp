#define _CRT_SECURE_NO_WARNINGS // sscanf()함수 오류 제거
#include <stdio.h> // sscanf()함수 선언
#include <iostream>
class Date {
	int day, month, year;
public:
	Date(const char* s) { sscanf(s, "%d%*c%d%*c%d", &month, &day, &year); }
	Date(int m, int d, int y) { day = d; month = m; year = y; }
	void print() { std::cout << year << "년 " << month << "월 " << day << "일" << std::endl; }
};
int main()
{
	Date d1("10/29/2021");
	Date d2(10, 30, 2021);
	d1.print();
	d2.print();
	return 0;
}

//2021년 10월 29일
//2021년 10월 30일