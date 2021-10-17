#include <stdio.h>
int main(void)
{
	int num[3]; //배열 선언시 첨자의 값은 배열의 크기
	num[0] = 10; //배열 원소(element)의 첨자는 순서
	num[1] = 20;
	num[2] = 30;
	//num[3] = 40; run-time error!
	printf("%d, %d, %d ", num[0], num[1], num[2]);
	return 0;
}
//10, 20, 30
