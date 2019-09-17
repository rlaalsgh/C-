#pragma once
class Exp {
	int base, exp;// class�� defalut���� private�̱⿡ ���� �������� ����

public:
	Exp();// �⺻������ 
	Exp(int num1, int num2);// ��ü�� �����Ҷ� ���̽��� ������ �Է������� ������
	Exp(int num1);// ��ü�� ���̽��� �Է������� ������
	int getExp();//��ü�� ������ ȣ���ϱ� ���� �Լ�����
	int getBase();//��ü�� ���̽��� ȣ���ϱ� ���� �Լ�����
	int getValue();//��ü�� ������ ���������� ������ ���� ȣ���ϱ� ���� �Լ�����
	bool equals(Exp b);//��ü�� ��ü�� ���ϱ����� �Լ�

};
Exp::Exp(int num1, int num2) {// ��ü �Է½�
	base = num1;// ��ü�� num1�� base�� ����
	exp = num2;// ��ü�� num2�� exp�� ����

}

Exp::Exp(int num1) :Exp(num1, 1) {}//��ü�� ���̽��� �Է��ҽ� ������ 1�� ����

Exp::Exp() : Exp(1, 1) {}// �⺻�����ڴ� ���̽� 1, ���� 1�� ����



int Exp::getValue() {// ��ü�� ������ ������ ����Ͽ� ����
	int value = base;// �������� ���� value�� base�� ����
		for (int i = 1; i < exp; i++)// ������ ����� for��
		{
			value = value * base;
		}
		return value;
}

int Exp::getBase() {//��ü�� ���̽� ����
	return base; 
}

int Exp::getExp() {// ��ü�� ���� ����
	return exp;
}

bool Exp::equals(Exp b) {//��ü�� ��ü�� ���� equals�Լ�
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}

