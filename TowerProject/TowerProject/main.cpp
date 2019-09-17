#include<iostream>
using namespace std;

class Tower 
{
	int height; // class 의 디폴트 값은 private이기에 따로 지정하지 않음

public:
	Tower(); // Tower 기본생성자
	Tower(int a); // Tower 생성자
	int getHeight(); // 높이를 호출하기 위한 함수
};

Tower::Tower(int a) { 
	height = a;//높이를 a 지정
}

Tower::Tower() :Tower(1) {} // 기본생성자는 높이를 1로 고정

int Tower :: getHeight() {// 높이 호출
	return height;
}

// 실습문제 1번 예문
int main() 
{
	Tower myTower; // 기본생성자로 객체 생성
	Tower seoulTower(100); // 높이값 100으로 객체 생성

	cout << "높이는 " << myTower.getHeight() << "미터" << endl; // 출력문
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl; // 출력문

}