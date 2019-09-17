#pragma once
class Exp {
	int base, exp;// class의 defalut형은 private이기에 따로 설정하지 않음

public:
	Exp();// 기본생성자 
	Exp(int num1, int num2);// 객체를 생성할때 베이스와 지수를 입력했을시 생성자
	Exp(int num1);// 객체에 베이스만 입력했을시 생성자
	int getExp();//객체의 지수를 호출하기 위해 함수선언
	int getBase();//객체의 베이스를 호출하기 위해 함수선언
	int getValue();//객체를 지수로 정리했을때 정리한 값을 호출하기 위해 함수선언
	bool equals(Exp b);//객체와 객체를 비교하기위한 함수

};
Exp::Exp(int num1, int num2) {// 객체 입력시
	base = num1;// 객체의 num1을 base로 정의
	exp = num2;// 객체의 num2를 exp로 정의

}

Exp::Exp(int num1) :Exp(num1, 1) {}//객체의 베이스만 입력할시 지수는 1로 고정

Exp::Exp() : Exp(1, 1) {}// 기본생성자는 베이스 1, 지수 1로 고정



int Exp::getValue() {// 객체를 지수를 정수로 계산하여 리턴
	int value = base;// 정수값을 받을 value를 base에 대입
		for (int i = 1; i < exp; i++)// 정수로 계산할 for문
		{
			value = value * base;
		}
		return value;
}

int Exp::getBase() {//객체의 베이스 리턴
	return base; 
}

int Exp::getExp() {// 객체의 지수 리턴
	return exp;
}

bool Exp::equals(Exp b) {//객체와 객체를 비교할 equals함수
	if (getValue() == b.getValue())
		return true;
	else
		return false;
}

