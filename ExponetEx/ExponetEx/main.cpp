#include<iostream>
using namespace std;

#include"Exp.h"
int main() 
{
	Exp a(3, 2);// ���̽� 3 , ���� 2 �� Exp��ü ����
	Exp b(9);// ���̽� 9�� Exp ��ü ����
	Exp c;// �⺻������ Exp ��ü ����

	cout  <<a.getValue()<< " " << b.getValue()<< " " << c.getValue() << endl;
	//a, b, c �� ������ �����Ͽ� ��Ÿ����. 
	cout << "a�� ���̽� " << a.getBase() << ',' << "���� " << a.getExp() << endl;
	//a�� ���̽��� ������ ��Ÿ����.
	if (a.equals(b))// a �� b �� ������ ���������� ������
		cout << "same" << endl;//same ���
	else//�� �� 
		cout << "not same" << endl;//not same ���

	return 0;// 0���� ��ȯ;
}
