#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

// ���� �Ҹ��ڶ�?
/*
// ���� �Ҹ��ڴ� ����������, ���� �����ڴ� �������� �ʽ��ϴ�.

class A
{
public :
	A()
	{
		cout << "A Ŭ���� ����" << endl;
	}
	virtual ~A()
	{
		cout << "A Ŭ���� �Ҹ�" << endl;
	}

};

class B : public A
{
public :
	B()
	{
		cout << "B Ŭ���� ����" << endl;
	}

	virtual ~B()
	{
		cout << "B Ŭ���� �Ҹ�" << endl;
	}
};
*/

// ������
/*
// Ŭ������ ��� �Լ��� �ƴ�����, Ŭ������ friend ��� �����ϰ� �Ǹ�
// Ŭ������ ��� �Լ�ó�� private ����� ������ �� �ִ� ����Դϴ�.

class PeopleA
{
private :
	int age;
	// ģ���� ������ Ŭ������ �̸��� �����մϴ�.

	friend void Information(PeopleA a) // <- ���� �Լ��� ����
	{
		cout << "PeopleA Ŭ���� ����" << endl;
	}

	// friend Ű����� public, private, protected
	// ��𿡼��� ��밡���մϴ�.
	friend class PeopleB;
public :
	PeopleA(int age)
	{
		this->age = age;
	}
};

class PeopleB
{
public :
	void FriendInformation(PeopleA people)
	{
		cout << people.age << endl;
	}
};
*/

int main()
{
	// ���� �Ҹ���
	/*
	// ���� �Ҹ��ڰ� ȣ��Ǹ� ��� ������ �� �Ʒ��� �ִ� ���� Ŭ������
	// �Ҹ��ڰ� ��� ȣ��Ǹ鼭 ���� Ŭ������ �Ҹ��ڰ� ������� ȣ��˴ϴ�.

	A* aptr = new B();

	delete aptr;
	*/

	// ������
	/*
	PeopleA a(10);
	Information(a);
	PeopleB b;
	b.FriendInformation(a);
	*/

	// ����
	/*
	int number1;
	int number2;

	cin >> number1 >> number2;

	cout << number2 % 10 * number1 << endl;
	cout << number2 / 10 % 10 * number1 << endl;
	cout << number2 / 100 * number1 << endl;
	cout << number1 * number2 << endl;
	*/

	// �ߺ����� �ʴ� ������
	// �迭�� �����մϴ�.
	// 2. �迭�� ���������� ���� �����մϴ�.
	// [5][4][][][]

	int array[10];
	srand(time(NULL));

	// �迭�� �ε��� == �迭�� �ε��� + 1
	// [4] [5] [] [] [] [] [] [] [] []
	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;

		if (array[i] == array[i + 1])
		{
			i--;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}