#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class Cat {
private:  // ��������
	string name;
	int age;
	double weight;


public:
	Cat()
	{
		age = 1;
		name = "Kaya";
	}
	Cat(int age, string name)
	{
		this->age = age;
		this->name = name;
		cout << name << "����� ��ü�� ����������." << endl;
	}
	string getName()const;
	int getAge()const;
	double getWeight()const;

	void setName(string a);
	void setAge(int a);
	void setWeight(double a);
	void meow()const;
	void cry(int x = 1) {
		for (int i = 0; i < x; i++) {
			cout << name << "�߿�~~!~!!";
		}
		cout << endl;
	}
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
	cout << name << "�Ҹ�" << endl;
}

int main()
{
	Cat Kaya(5, "ī��"), yaong(2, "�߿�"), * pKaya;
	int num, pAge;
	cout << Kaya.getName() << " ��� ���̴� " << Kaya.getAge() << "���̴�." << endl;
	cout << yaong.getName() << " ��� ���̴� " << yaong.getAge() << "���̴�." << endl;
	pKaya = &Kaya;
	cout << pKaya->getName() << " ��� ���̴� " << pKaya->getAge() << "���̴�." << endl;
	Kaya.setName("Kaya");
	Kaya.setAge(3);
	cout << Kaya.getName() << " ���̴� " << Kaya.getAge() << "���̴�.\n";
	yaong.meow();
	Kaya.meow();
	yaong.cry();
	Kaya.cry(5);

	cout << "\n�������� ������ ����� ��==";
	cin >> num;
	Cat* pCat = new Cat[num]; //��ü�迭�� �������� �޸� �Ҵ�, default ������ ������ ��
	if (!pCat) {
		cout << "�޸��Ҵ��� ���� �ʾҽ��ϴ�.";
		return 1;
	}
	for (int i = 0; i < num; i++) {
		cout << "pCat[" << i << "]" << "��ü�� ���̸� �Է��Ͻʽÿ� : ";
		cin >> pAge;
		pCat[i].setAge(pAge);
	}
	for (int i = 0; i < num; i++)
		cout << "pCat[" << i << "]" << " ��ü�� ���̴� " << pCat[i].getAge() << "�Դϴ�.\n ";
	cout << endl;
	delete[]pCat;
	//�Ҵ� ���� �޸� ����, �迭�� �Ҵ���� ��� delete ������ �ݵ�� []�� ��� �մϴ�. 
	return 0;



}
//ī�߰���� ��ü�� ����������.
//�߿˰���� ��ü�� ����������.
//ī�� ��� ���̴� 5���̴�.
//�߿� ��� ���̴� 2���̴�.
//ī�� ��� ���̴� 5���̴�.
//Kaya ���̴� 3���̴�.
//�߿�~
//�߿�~
//�߿˾߿�~~!~!!
//Kaya�߿�~~!~!!Kaya�߿�~~!~!!Kaya�߿�~~!~!!Kaya�߿�~~!~!!Kaya�߿�~~!~!!
//
//�������� ������ ����� �� == 3
//pCat[0]��ü�� ���̸� �Է��Ͻʽÿ� : 1
//pCat[1]��ü�� ���̸� �Է��Ͻʽÿ� : 4
//pCat[2]��ü�� ���̸� �Է��Ͻʽÿ� : 7
//pCat[0] ��ü�� ���̴� 1�Դϴ�.
//pCat[1] ��ü�� ���̴� 4�Դϴ�.
//pCat[2] ��ü�� ���̴� 7�Դϴ�.
//
//Kaya�Ҹ�
//Kaya�Ҹ�
//Kaya�Ҹ�
//�߿˼Ҹ�
//Kaya�Ҹ�

