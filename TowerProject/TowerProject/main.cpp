#include<iostream>
using namespace std;

class Tower 
{
	int height; // class �� ����Ʈ ���� private�̱⿡ ���� �������� ����

public:
	Tower(); // Tower �⺻������
	Tower(int a); // Tower ������
	int getHeight(); // ���̸� ȣ���ϱ� ���� �Լ�
};

Tower::Tower(int a) { 
	height = a;//���̸� a ����
}

Tower::Tower() :Tower(1) {} // �⺻�����ڴ� ���̸� 1�� ����

int Tower :: getHeight() {// ���� ȣ��
	return height;
}

// �ǽ����� 1�� ����
int main() 
{
	Tower myTower; // �⺻�����ڷ� ��ü ����
	Tower seoulTower(100); // ���̰� 100���� ��ü ����

	cout << "���̴� " << myTower.getHeight() << "����" << endl; // ��¹�
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl; // ��¹�

}