#include <iostream>
int add(int i= 1, int j =2) // 형식매개변수
{
	return(i + j);
}
int main()
{
	std::cout << add() << ","; // 실매개변수 없음, 3
	std::cout << add(10) << ","; // 실매개변수 한 개, 12
	std::cout << add(10, 20); // 실매개변수 두개, 30
	return 0;
}
//3, 12, 30
