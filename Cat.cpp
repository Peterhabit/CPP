#include<iostream>
using std::cout;
using std::endl;
using std::string;
class Cat {
private:
	string name;
	int age;
	double weight;


public:
	Cat(int a)
	{
		age = a;
	}
	string getName();
	int getAge();
	double getWeight();

	void setName(string a);
	void setAge(int a);
	void setWeight(double a);
	void meow();
	~Cat();
};

string Cat::getName()
{
	return this->name;
}
int Cat::getAge()
{
	return this->age;
}
double Cat::getWeight()
{
	return this->weight;
}

void Cat::setName(string a)
{
	name = a;
}
void Cat::setAge(int a)
{
	age = a;
}
void Cat::setWeight(double a)
{
	weight = a;
}
void Cat::meow()
{
	cout << "야옹~" << endl;
}
Cat::~Cat()
{
	cout << "소멸" << endl;
}

int main()
{
	Cat Kaya(3);
	Kaya.setName("카야");
	Kaya.setWeight(3.5);
	Kaya.meow();
	cout << "이름 : " << Kaya.getName() << endl;
	cout << "나이 : " << Kaya.getAge() << endl;
	cout<< "체중 : " << Kaya.getWeight() << endl;
	return 0;
}
//야옹~
//이름 : 카야
//나이 : 3
//체중 : 3.5
//소멸