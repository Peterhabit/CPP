#include <iostream>

int Max(int i, int j)
{
	return i > j ? i : j;
}
double Max(double i, double j)
{
	return i > j ? i : j;
}
char Max(char i, char j)
{
	return i > j ? i : j;
}
int main()
{
	std::cout << Max(1, 2) << std::endl;
	std::cout << Max(7.5, 3.6) << std::endl;
	std::cout << Max('A', 'B');
	return 0;
}
//2
//7.5
//B