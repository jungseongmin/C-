#pragma once
#include <iostream>

using namespace std;

// ���� ����̶�?
// � Ŭ������ �ϳ� �̻��� ���� Ŭ�����κ��� ���� ���� �ൿ�̳� Ư¡��
// ��ӹ��� �� �ִ� ����Դϴ�.
/*
class Keyboard
{
public :
	Keyboard()
	{
		cout << "keyBoard ȣ��" << endl;
	}

	void Input()
	{
		cout << "Ű���� �Է�" << endl;
	}

	int key;
};

class Mouse
{
public :
	Mouse()
	{
		cout << "Mouse ȣ��" << endl;
	}

	void Input()
	{
		cout << "���콺 �Է�" << endl;
	}

	int sensor;
};

class Computer : public Keyboard, public Mouse
{
	Computer(int _key, int _sensor)
	{
		Keyboard::key = _key;
		Mouse::sensor = _sensor;

		cout << Keyboard::key << endl;
		cout << Mouse::sensor << endl;
	}
};
*/

// ���� ���
/*
class A
{
public :
	A()
	{
		cout << "A Ŭ���� ȣ��" << endl;
	}
};

class B : virtual public A
{
public :
	B()
	{
		cout << "B Ŭ���� ȣ��" << endl;
	}
};

class C : virtual public A
{
public :
	C()
	{
		cout << "C Ŭ���� ȣ��" << endl;
	}
};

class D : public B, public C
{
public :
	D()
	{
		cout << "D Ŭ���� ȣ��" << endl;
	}
};
*/

int main()
{
	// ���� ���
	/*
	Computer computer(1,40);

	// ���� ����� �� ���� �̸��� �Լ��� ����Ϸ��� Ŭ������ ����ϰ�
	// ���� ���� �����ڸ� ����ؼ� �Լ��� ȣ���ؾ� �մϴ�.
	computer.Keyboard::Input(); // keyboard Ŭ������ Input();
	computer.Mouse::Input();
	*/

	// ���̾Ƹ�� ���
	/*
	// �ϳ��� �ڽ� Ŭ������ ��ӹ޴� ���� �ٸ� �θ� Ŭ��������,
	// ���� ���θ� Ŭ������ ��ӹ޴� �����Դϴ�.
	D d;

	// ���� ���
	*/

	// ������
	int array[10] = { 0, };
	int result = 0;
	int input = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		array[i] = input % 42;
	}

	for (int i = 0; i <= 9; i++)
	{
		int count = 0;
		// [1][2][3][4][5][6][7][8][9]
		// 1  2  3  4  5  6  7  8  9 10
		for (int j = i + 1; j <= 9; j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}

		if (count == 0)
		{
			result++;
		}
	}

	cout << result << endl;

	return 0;
}