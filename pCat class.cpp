#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class Cat {
private:  // 생략가능
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
		cout << name << "고양이 객체가 만들어졌어요." << endl;
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
			cout << name << "야옹~~!~!!";
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
	cout << "야옹~" << endl;
}
Cat::~Cat()
{
	cout << name << "소멸" << endl;
}

int main()
{
	Cat Kaya(5, "카야"), yaong(2, "야옹"), * pKaya;
	int num, pAge;
	cout << Kaya.getName() << " 출생 나이는 " << Kaya.getAge() << "살이다." << endl;
	cout << yaong.getName() << " 출생 나이는 " << yaong.getAge() << "살이다." << endl;
	pKaya = &Kaya;
	cout << pKaya->getName() << " 출생 나이는 " << pKaya->getAge() << "살이다." << endl;
	Kaya.setName("Kaya");
	Kaya.setAge(3);
	cout << Kaya.getName() << " 나이는 " << Kaya.getAge() << "살이다.\n";
	yaong.meow();
	Kaya.meow();
	yaong.cry();
	Kaya.cry(5);

	cout << "\n동적으로 생성할 고양이 수==";
	cin >> num;
	Cat* pCat = new Cat[num]; //객체배열을 동적으로 메모리 할당, default 생성자 만들어야 함
	if (!pCat) {
		cout << "메모리할당이 되지 않았습니다.";
		return 1;
	}
	for (int i = 0; i < num; i++) {
		cout << "pCat[" << i << "]" << "객체의 나이를 입력하십시오 : ";
		cin >> pAge;
		pCat[i].setAge(pAge);
	}
	for (int i = 0; i < num; i++)
		cout << "pCat[" << i << "]" << " 객체의 나이는 " << pCat[i].getAge() << "입니다.\n ";
	cout << endl;
	delete[]pCat;
	//할당 받은 메모리 해제, 배열로 할당받은 경우 delete 다음에 반드시 []를 써야 합니다. 
	return 0;



}
//카야고양이 객체가 만들어졌어요.
//야옹고양이 객체가 만들어졌어요.
//카야 출생 나이는 5살이다.
//야옹 출생 나이는 2살이다.
//카야 출생 나이는 5살이다.
//Kaya 나이는 3살이다.
//야옹~
//야옹~
//야옹야옹~~!~!!
//Kaya야옹~~!~!!Kaya야옹~~!~!!Kaya야옹~~!~!!Kaya야옹~~!~!!Kaya야옹~~!~!!
//
//동적으로 생성할 고양이 수 == 3
//pCat[0]객체의 나이를 입력하십시오 : 1
//pCat[1]객체의 나이를 입력하십시오 : 4
//pCat[2]객체의 나이를 입력하십시오 : 7
//pCat[0] 객체의 나이는 1입니다.
//pCat[1] 객체의 나이는 4입니다.
//pCat[2] 객체의 나이는 7입니다.
//
//Kaya소멸
//Kaya소멸
//Kaya소멸
//야옹소멸
//Kaya소멸

