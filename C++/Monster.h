#pragma once
#include <string>
#include <iostream>

// Monster 클래스 선언부
// 클래스 cpp와 h는 같은 내부 클래스입니다.
class Monster
{
	// this 포인터란?
	// 객체 자신을 가리키는 포인터입니다.

	void Attack(int power); // 함수 선언
	this->power = power;
	std::cout << this << "이 객체가" << this->power << "만큼 공격하였습니다." << std::endl;
};

