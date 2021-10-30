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
	Cat()
	{
		age = 1;
		name = "Kaya";
	}
	string getName()const;
	int getAge()const;
	double getWeight()const;

	void setName(string a);
	void setAge(int a);
	void setWeight(double a);
	void meow()const;
	~Cat();
};

string Cat::getName()const
{
	return this->name;
}
int Cat::getAge()const
{
	return this->age;
}
double Cat::getWeight()const
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
void Cat::meow()const
{
	cout << "야옹~" << endl;
}
Cat::~Cat()
{
	cout << name<< "소멸" << endl;
}

int main()
{
	Cat *pCat;
	pCat = new Cat[10];
	if (!pCat) {
		cout << "메모리할당이 되지 않았습니다.";
		return 1;
	}
	for (int i = 0; i < 10; i++) // C++에서는 가능
		pCat[i].setAge(i);
	for (int i = 0; i < 10; i++)
		std::cout << i << "번째 객체의 나이는 " <<
		pCat[i].getAge() << " 입니다. " << std::endl;
	delete[]pCat;
	return 0;

}
//0번째 객체의 나이는 0 입니다.
//1번째 객체의 나이는 1 입니다.
//2번째 객체의 나이는 2 입니다.
//3번째 객체의 나이는 3 입니다.
//4번째 객체의 나이는 4 입니다.
//5번째 객체의 나이는 5 입니다.
//6번째 객체의 나이는 6 입니다.
//7번째 객체의 나이는 7 입니다.
//8번째 객체의 나이는 8 입니다.
//9번째 객체의 나이는 9 입니다.
//Kaya소멸
//Kaya소멸
//Kaya소멸
//Kaya소멸
//Kaya소멸
//Kaya소멸
//Kaya소멸
//Kaya소멸
//Kaya소멸
//Kaya소멸
