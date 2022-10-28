#pragma once
#include <iostream>
#include <memory>

using namespace std;

// ����Ʈ �����Ͷ�?
/*
// ������ó�� �����ϴ� Ŭ���� ���ø����� ����� ���� �޸𸮸�
// �ڵ����� �����ϴ� �������Դϴ�.


class Player
{
public :
	Player()
	{
		cout << "Player ����" << endl;
	}

	~Player()
	{
		cout << "Player �Ҹ�" << endl;
	}
};
*/

class Person
{
public:
	// shared_ptr�� ������ ��� ��ȯ ������ �߻��մϴ�.
	// weak_ptr�� ������ ��� ��ȯ ������ ������ �� �ֽ��ϴ�.
	weak_ptr<Person> person;

	Person()
	{
		cout << "����" << endl;
	}

	~Person()
	{
		cout << "�Ҹ�" << endl;
	}

};


int main()
{
	// shared_ptr ������
	/*
	// � �ϳ��� ��ü�� �����ϴ� ����Ʈ �������� ������ �����ϴ� �������Դϴ�.
	// �����ϰ� �ִ� ����Ʈ �������� ������ ���� ī��Ʈ��� �մϴ�.

	// ���� ī��Ʈ��?
	// �ش� �޸𸮸� �����ϴ� �����Ͱ� ��� �ִ��� ��Ÿ���� ���Դϴ�.
	// �����ϴ� �����Ͱ� �߰��Ǹ� 1�� �����ϰ� �����ϴ� �����Ͱ� �������� 1�� �����մϴ�.

	// ù��°�� �ʱ�ȭ�ϴ� ���
	// shared_ptr<int> ptr1(new int(5));
	// �ι�°�� �ʱ�ȭ�ϴ� ���
	// shared_ptr<int> ptr1 = make_shared<int>(5);

	// shared_ptr���� ���� ī��Ʈ�� Ȯ���ϴ� ���
	// ptr1.use_count()

	shared_ptr<Player> ptr1(new Player());

	cout << "ptr1 ���� ī��Ʈ : " << ptr1.use_count() << endl;

	shared_ptr<Player> ptr2 = ptr1;

	cout << "ptr1 ���� ī��Ʈ : " << ptr2.use_count() << endl;

	// delete ptr2;
	// delete ptr1;
	*/

	// unique_ptr ������
	/*
	// �ϳ��� ����Ʈ �����͸� ����ų �� �ִ� �������Դϴ�.
	// shared_ptr ���� ī��Ʈ�� 1 �̻� �ѱ� �� �����ϴ�.

	unique_ptr<Player> ptr1(new Player());

	// ptr1�� ������ �ִ� �޸� ������(�������� �Ҵ��� �޸�)��
	// ptr2���� �޸� �������� �Ѱ��ִ� �����Դϴ�.

	unique_ptr<Player> ptr2 = move(ptr1);

	// reset : �޸� ������ ������ �� �ִ� �Լ�
	ptr2.reset();

	// unique_ptr<int> ptr3 = ptr1; ERROR
	*/

	// weak_ptr ������
	// �ϳ� �̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü�� ���� ������
	// ����������, ���� ī��Ʈ�� ���Ե��� �ʴ� ����Ʈ �������Դϴ�.

	// ���࿡ ���ΰ� ��븦 ����Ű�� shared_ptr�� ������ �ִٸ�,
	// ���� Ƚ���� ���� 1 ���Ϸ� �������� �ʽ��ϴ�.
	// shared_ptr�� ������ ���� �ʴ� ������ �߻��մϴ�.

	// ��ȯ ����
	// ���� ��븦 �����ϴ� ��Ȳ�Դϴ�.

	// shared_ptr �ν��Ͻ� ���̿� ��ȯ ������ �����ϱ� ���� ����ϴ�
	// ����Ʈ�������Դϴ�.

	shared_ptr<Person> obj1(new Person());
	shared_ptr<Person> obj2(new Person());

	cout << "obj1 ���� ī��Ʈ : " << obj1.use_count() << endl;
	cout << "obj2 ���� ī��Ʈ : " << obj2.use_count() << endl;

	obj1->person = obj2;
	obj2->person = obj1;

	cout << "obj1 ���� ī��Ʈ : " << obj1.use_count() << endl;
	cout << "obj2 ���� ī��Ʈ : " << obj2.use_count() << endl;

	return 0;
}