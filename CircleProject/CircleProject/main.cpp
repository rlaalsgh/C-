#include<iostream>
using namespace std;
#include"Circle.h"
int main()
{
	Circle a;
	double area = a.getArea();
	cout << "a�� ���� : " << area<<endl;

	Circle b(5);
	area = b.getArea();
	cout << "b�� ����" << area<<endl;


}