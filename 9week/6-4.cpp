#include <iostream>
class Dog {
private:
	int age;
public:
	Dog() { age = 1; } // �Ű������� ���� ������, �ڵ� inline
	Dog(int a) { age = a; } // �Ű������� �ϳ��� ������
	~Dog();
	int getAge();
	void setAge(int a);
};
Dog::~Dog()
{
	std::cout << "�Ҹ�";
	//�Ҹ��ڴ� ��ø �Ұ���
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
	Dog happy(5), meri; // �Ű����� �ִ� ������, �Ű����� ���� ������
						//Ŭ���� ���ǿ� �޸� ����
	std::cout << happy.getAge() << "," << meri.getAge();
	return 0;
}
//5, 1�Ҹ�Ҹ�