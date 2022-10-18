#pragma once
#include <iostream>
#include <string>
using namespace std;

// �̸� ����(namespace)�̶�?
/*
// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

namespace ClientA
{
    using namespace std;

    void Attack()
    {
        std::cout << "���Ÿ� ����" << std::endl;
    }
}

// ClientA�� �̸� ������ ������� �ʾƵ� ����ϰڴٴ� �ǹ��Դϴ�.
using namespace ClientA;

namespace ClientB
{
    void Attack()
    {
        cout << "�ٰŸ� ����" << endl;
    }
}


int value = 20;
*/

// �⺻ �Ű�����
/*
// �Լ��� ������ �� �Ű������� ����� ���ÿ� �ʱ�ȭ�ϴ� �Ű������Դϴ�.

// �⺻ �Ű������� �����ʿ��� ���� �����ؾ� �մϴ�.
void Function(int x, int y = 30, int z = 30)
{
    cout << "x�� �� : " << x << endl;
    cout << "y�� �� : " << y << endl;
}
*/

int main()
{
    // ���� ���� �����ڶ�?
    /*
    // ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�.

    int value = 10; // ���� ���� value
                    // ���� ����

    // ��ǻ�� ��� �̷� (���� ��Ģ)
    // ���� ������ ���� �̸��� ���� ������ ����Ǿ��� ��
    // ���� ����� ������ �����ϴ� ������ �̸��� ����ϴ� ��Ģ�Դϴ�.
    cout << "value�� �� : " << value << endl;

    cout << "���� ���� value �� : " << ::value << endl;

    Attack(); // using namespace�� ����ϱ� ������
              // ClientA::

    ClientB::Attack();
    */

    // �⺻ �Ű�����
    /*
    // �⺻ �Ű������� �����ϰ� �Ǹ� �Լ��� �μ���
    // �������� �ʾƵ� ����� �� �ֽ��ϴ�.

    // �Լ��� �μ��� ������ �� �Ű������� ���ʺ��� ���� ���ϴ�.
    Function(5);
    */

    string name;

    // [k][i][m][\0][g][e][u][m]
    // ���ڿ��� NULL���ڱ����� ����մϴ�.

    cin >> name;

    // getline( ) �Լ� : ǥ���Է��� �޴� ��� Enter�� ���ο�
    //                   ���� �Է¹��� ���ڿ��� �����մϴ�.
    getline(cin, name);

    cout << name;

    // OX����
    int input, score, sum;
    char buffer[89];

    cin >> input;

    for (int i = 0; i < input; i++)
    {
        sum = 0;
        score = 1;

        cin >> buffer;

        // [][][][][][]
        for (int j = 0; j < strlen(buffer); j++)
        {
            // 0
            if (buffer[j] == 'O')
            {
                sum += score;
                score++;
            }

            if (buffer[j] == 'x')
            {
                score = 1;
            }
        }

        cout << sum << endl;

    }

    return 0;
}
