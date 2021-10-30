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
	cout << "�߿�~" << endl;
}
Cat::~Cat()
{
	cout << name<< "�Ҹ�" << endl;
}

int main()
{
	Cat *pCat;
	pCat = new Cat[10];
	if (!pCat) {
		cout << "�޸��Ҵ��� ���� �ʾҽ��ϴ�.";
		return 1;
	}
	for (int i = 0; i < 10; i++) // C++������ ����
		pCat[i].setAge(i);
	for (int i = 0; i < 10; i++)
		std::cout << i << "��° ��ü�� ���̴� " <<
		pCat[i].getAge() << " �Դϴ�. " << std::endl;
	delete[]pCat;
	return 0;

}
//0��° ��ü�� ���̴� 0 �Դϴ�.
//1��° ��ü�� ���̴� 1 �Դϴ�.
//2��° ��ü�� ���̴� 2 �Դϴ�.
//3��° ��ü�� ���̴� 3 �Դϴ�.
//4��° ��ü�� ���̴� 4 �Դϴ�.
//5��° ��ü�� ���̴� 5 �Դϴ�.
//6��° ��ü�� ���̴� 6 �Դϴ�.
//7��° ��ü�� ���̴� 7 �Դϴ�.
//8��° ��ü�� ���̴� 8 �Դϴ�.
//9��° ��ü�� ���̴� 9 �Դϴ�.
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
