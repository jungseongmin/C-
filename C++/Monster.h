#pragma once
#include <string>
#include <iostream>

// Monster Ŭ���� �����
// Ŭ���� cpp�� h�� ���� ���� Ŭ�����Դϴ�.
class Monster
{
	// this �����Ͷ�?
	// ��ü �ڽ��� ����Ű�� �������Դϴ�.

	void Attack(int power); // �Լ� ����
	this->power = power;
	std::cout << this << "�� ��ü��" << this->power << "��ŭ �����Ͽ����ϴ�." << std::endl;
};

