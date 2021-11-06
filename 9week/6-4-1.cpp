#include <iostream>
int add(int i, int j)
{
	return (i + j);
}
float add(float i, float j)
{
	return (i + j);
}
double add(double i, double j)
{
	return (i + j);
}
int main()
{
	std::cout << add(1, 2) << std::endl;
	std::cout << add(1.3f, 2.6f) << std::endl;
	std::cout << add(6.5, 3.8) << std::endl;
	return 0;
}
//3
//3.9
//10.3
//매개변수 형이 다른경우