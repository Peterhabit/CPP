#include <iostream>
int add(int i= 1, int j =2) // ���ĸŰ�����
{
	return(i + j);
}
int main()
{
	std::cout << add() << ","; // �ǸŰ����� ����, 3
	std::cout << add(10) << ","; // �ǸŰ����� �� ��, 12
	std::cout << add(10, 20); // �ǸŰ����� �ΰ�, 30
	return 0;
}
//3, 12, 30
