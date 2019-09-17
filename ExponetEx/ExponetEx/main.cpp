#include<iostream>
using namespace std;

#include"Exp.h"
int main() 
{
	Exp a(3, 2);// 베이스 3 , 지수 2 인 Exp객체 생성
	Exp b(9);// 베이스 9인 Exp 객체 생성
	Exp c;// 기본생성자 Exp 객체 생성

	cout  <<a.getValue()<< " " << b.getValue()<< " " << c.getValue() << endl;
	//a, b, c 를 지수로 정리하여 나타낸다. 
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;
	//a의 베이스와 지수를 나타낸다.
	if (a.equals(b))// a 와 b 를 지수로 정리했을때 같으면
		cout << "same" << endl;//same 출력
	else//그 외 
		cout << "not same" << endl;//not same 출력

	return 0;// 0으로 반환;
}
