#include<iostream>
using namespace std;
#include"Circle.h"
int main()
{
	Circle a;
	double area = a.getArea();
	cout << "a의 면적 : " << area<<endl;

	Circle b(5);
	area = b.getArea();
	cout << "b의 면적" << area<<endl;


}