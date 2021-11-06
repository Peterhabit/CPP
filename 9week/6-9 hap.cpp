#include <iostream>

int Hap(int i, int j, int k = 0, int l = 0)
{
	return(i + j + k + l);
}

int main()
{
	std::cout << Hap(1, 2) << std::endl; // 1+ 2+ 0+ 0
	std::cout << Hap(1, 2, 3) << std::endl; // 1+2+3+0
	std::cout << Hap(1, 2, 3, 4) << std::endl;//1+2+3+4
	return 0;
}
//3
//6
//10