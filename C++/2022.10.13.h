#pragma once
#include <iostream> // iostream : ����� ��Ʈ��

// ��Ʈ��
// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧�Դϴ�.

// auto�� �Ű� ������ ����� �� �����ϴ�.
/*
void Funciton(auto x)
{

}
*/

// Ŭ����
// Ư�� ��ü�� �Ӽ��� ����� ������ ����ü�Դϴ�.
class Player
{
    // ���� ������
    // Ŭ���� �ܺο��� ���� ���� ���(����, �Լ�)�� Ŭ���� �ܺο��� ������
    // ������ �ʵ��� ���(����, �Լ�)�� �����ϴ� �������Դϴ�.

    // public : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸���
    //          �ܺο��� ������ ����� �� �ִ� �������Դϴ�.
    // private : Ŭ���� ���ο����� ������ ���ǰ�, �ڱⰡ ����ϴ� Ŭ������
    //           Ŭ���� �ܺο��� ������ �� ���� �������Դϴ�.
    // protected : Ŭ���� ���ο� �ڱⰡ ����ϴ� Ŭ���������� ������ ����ϰ�
    //             Ŭ���� �ܺο����� ������ �� �� ���� �������Դϴ�.

    // Ŭ������ ���� �����ڸ� ������ ������ �⺻������ private�� �����˴ϴ�.
    void Attack()
    {
        std::cout << "����" << std::endl;
    }

public:
    int health = 100;
    float size = 3.65;
    std::string name = "kim GEUM SOO";

};


int main()
{
    // C++ �⺻ �����
    /*

    // std::cout : ����ϱ� ���� ��ü
    // std::endl : ���ڿ� ����

    // ���� ������ "<<" : ��� ��Ʈ�� ��ü�� ����Ʈ�� ������ �������Դϴ�.

    char alphabet = 'B';
    int value = 10;
    float variable = 10.5;

    std::cout << "alphabet ������ ��" << alphabet << std::endl;
    std::cout << "value ������ �� : " << value << std::endl;
    std::cout << "variable ������ ��" << variable << std::endl;

    // ���� ������ ">>" : �Է��� �����͸� �Է� ��Ʈ������ �����Ͽ� �����ʿ�
    //                    ��ġ�� ������ ���� �����մϴ�.

    // std::cin : �Է��ϱ� ���� ��ü

    std::cin >> value;

    std::cout << "value ������ �� : " << value << std::endl;

    std::cout << "�� ��° �ȳ��ϼ���.";
    */

    // bool = ���� ������ ��Ÿ���� �ڷ����Դϴ�.
    // bool value = true;

    // ���� ��� for��
    /*
    // ���۰� ������ �˷����� �ʾƵ� ũ�⿡ ���� ������ ��ȸ���ִ� �ݺ����Դϴ�.

    int array[] = { 1,2,3,4,5 };

    // element : ���� �̸�
    // array : ������ ����Ʈ (�迭, ����, ����Ʈ)
    for (int element : array)
    {
        // ���� ��� for�� ����

        // 1. for �� ������ index ������ �������� �ʽ��ϴ�.
        // 2. for �迭�� ��Ҹ� ������ �� �����ϴ�.

        // ���� ������ ���·� ������Ű�� ���� �����մϴ�. element += 1;
        // �迭 �ȿ� �ִ� ���� ��ü �ʱ�ȭ�� �����մϴ�. element = 10'
        element = 10;

        // element : call by value ���·� ���� �����ݴϴ�.
        std::cout << element << std::endl;
    }

    std::cout << "--------------" << std::endl;

    for (int element : array)
    {
        std::cout << element << std::endl;
    }
    */

    // �ڷ��� �߷�
    /*
    // ������ �Լ��� �����ϰ� ������ �̷���� �� �����Ϸ��� �ڵ����� �ڷ�����
    // �߷����ִ� ����Դϴ�.

    // �ڷ��� �߷��� ������ �ʱ�ȭ���� ������ ����� �� �����ϴ�.

    auto value = 10;
    auto decimal = 20.6;

    std::cout << "value ������ �� : " << value << std::endl;
    std::cout << "decimal ������ �� : " << decimal << std::endl;
    */

    // Ŭ����
    Player kim;

    kim.health = 100;
    kim.size = 10.65;
    kim.name = "kim";

    std::cout << kim.health << " " << kim.size << " " << kim.name << std::endl;

    return 0;
}