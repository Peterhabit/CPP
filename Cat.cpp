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
	cout << "�߿�~" << endl;
}
Cat::~Cat()
{
	cout << "�Ҹ�" << endl;
}

int main()
{
	Cat Kaya(3);
	Kaya.setName("ī��");
	Kaya.setWeight(3.5);
	Kaya.meow();
	cout << "�̸� : " << Kaya.getName() << endl;
	cout << "���� : " << Kaya.getAge() << endl;
	cout<< "ü�� : " << Kaya.getWeight() << endl;
	return 0;
}
//�߿�~
//�̸� : ī��
//���� : 3
//ü�� : 3.5
//�Ҹ�