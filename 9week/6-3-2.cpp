#include <iostream>
int add(int i, int j)
{
	return (i + j);
}
int add(int i, int j, int k)
{
	return (i + j + k);
}
int add(int i, int j, int k, int l)
{
	return (i + j + k + l);
}
int main()
{
	std::cout << add(1, 2) << std::endl;
	std::cout << add(1, 2, 3) << std::endl;
	std::cout << add(1, 2, 3, 4) << std::endl;
	return 0;
}
//3
//6
//10
//매개변수의 갯수가 다른경우