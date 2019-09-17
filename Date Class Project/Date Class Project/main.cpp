#include <iostream>
#include <string>
using namespace std;
class Date {
public:
	Date(int year, int month, int day);
	Date(string s);
	int Year, Month, Day;//날짜를 구하기위해 년 월 일에 대한 변수선언 
	int getYear(), getMonth(), getDay();// 날짜를 구하기 위한 멤버함수선언
	void show();//출력문
};

Date::Date(int year, int month, int day) {//멤버 함수를 위한 멤버변수 선언
	Year = year;
	Month = month;
	Day = day;
}

Date::Date(string s) {
	int s1, s2, count = 0; // 1번째 슬래시 위치, 2번째 슬래시 위치, 슬래시 카운터
	for (int i = 0; i < s.length(); i++) { // 0부터 문자열 길이까지 반복
		if (s[i] == '/' && count == 0) { // s[i]가 / 이면서 count 가 1인 경우
			s1 = i; // 1번째 슬래시 위치
			count++; // count를 1 증가 시켜준다
		}
		else if (s[i] == '/' && count == 1) { // s[i]가 / 이면서 count 가 1인 경우
			s2 = i; // 2번째 슬래시 위치에
			count++; // count를 1증가 시켜준다.
		}
	}
	Year = stoi(s.substr(0, s1)); // 0~1번째 슬래시까지 잘라서 숫자화
	Month = stoi(s.substr(s1 + 1, s2 - s1 - 1)); // 1번째 슬래시 +1 ~ 2번째 슬래시 -1 까지 잘라서 숫자화
	Day = stoi(s.substr(s2 + 1, s.length())); // 2번째 슬래시 +1 ~ 끝까지 숫자화
}

int Date::getYear() { return Year;}// getYear()를 통해서 Month변수를 리턴

int Date::getMonth() {return Month;}// getMonth()를 통해서 Month변수를 리턴

int Date::getDay() {return Day;}// getDay()를 통해서 Day변수를 리턴

void Date::show() { // 출력문을 위한 void 함수 show()
	cout << Year << "년" << Month << "월" << Day << "일" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}