#include <iostream>
class Dog {
private:
	int age;
public:
	Dog() { age = 1; } // 매개변수가 없는 생성자, 자동 inline
	Dog(int a) { age = a; } // 매개변수가 하나인 생성자
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::~Dog()
{
	std::cout << "소멸";
	//소멸자는 중첩 불가능
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
	Dog happy(5), meri; // 매개변수 있는 생성자, 매개변수 없는 생성자
						//클래스 해피와 메리 선언
	std::cout << happy.getAge() << "," << meri.getAge();
	return 0;
}
//5, 1소멸소멸