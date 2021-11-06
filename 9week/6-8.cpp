#include <iostream>
class Dog {
private:
	int age;
public:
	Dog(int a = 1);
	
	
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::Dog(int a =1)
{ age = a;
}
Dog::~Dog()
{
	std::cout << "¼Ò¸ê\n";
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
	Dog meri, happy(5);
	std::cout << happy.getAge() << "," <<
		meri.getAge() << std::endl;
	return 0;
}
//5, 1
//¼Ò¸ê
//¼Ò¸ê
