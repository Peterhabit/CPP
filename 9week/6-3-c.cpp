#include <iostream>
int add2(int i, int j)
{
	return (i + j);
}
int add3(int i, int j, int k)
{
	return (i + j + k);
}
int add4(int i, int j, int k, int l)
{
	return (i + j + k + l);
}
int main()
{
	std::cout << add2(1, 2) << std::endl;
	std::cout << add3(1, 2, 3) << std::endl;
	std::cout << add4(1, 2, 3, 4) << std::endl;
	return 0;
} //오버로딩 안함
//3
//6
//10