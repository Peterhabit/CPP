#include <iostream>
int add(int i, int j)
{
	return (i + j);
}
double add(double i, double j)
{
	return (i + j);
}
int main()
{
	std::cout << add(10, 20) << std::endl;
	std::cout << add(10.5, 20.3) << std::endl;
	return 0;
}

//30
//30.8