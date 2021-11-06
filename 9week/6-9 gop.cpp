#include <iostream>
int Gop(int i, int j, int k = 1, int l = 1)
{
	return(i * j * k * l);
}
int main()
{
	std::cout << Gop(1, 2) << std::endl; // 1*2*1*1
	std::cout << Gop(1, 2, 3) << std::endl; // 1*2*3*1
	std::cout << Gop(1, 2, 3, 4) << std::endl;// 1*2*3*4
	return 0;
}

//2
//6
//24
