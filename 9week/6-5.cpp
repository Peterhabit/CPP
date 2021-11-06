#include <iostream>
using std::cout;
using std::endl;
class Dog {
private:
	int age;
public:
	Dog() { age = 1; }
	// 概俺函荐啊 绝绰 积己磊
	Dog(int a) { age = a; }
	// 概俺函荐啊 窍唱牢 积己磊
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::~Dog()
{
	std::cout << "家戈\n";
}
int Dog::getAge()
{
	return age;
}
void Dog::setAge(int a)
{
	age = a;
}
int main()
{
	Dog happy[5];
	Dog meri[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
		std::cout << happy[i].getAge() <<
		"," << meri[i].getAge() << std::endl;
	return 0;
}
//1, 1
//1, 2
//1, 3
//1, 4
//1, 5
//家戈
//家戈
//家戈
//家戈
//家戈
//家戈
//家戈
//家戈
//家戈
//家戈