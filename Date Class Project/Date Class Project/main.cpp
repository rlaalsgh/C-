#include <iostream>
#include <string>
using namespace std;
class Date {
public:
	Date(int year, int month, int day);
	Date(string s);
	int Year, Month, Day;//��¥�� ���ϱ����� �� �� �Ͽ� ���� �������� 
	int getYear(), getMonth(), getDay();// ��¥�� ���ϱ� ���� ����Լ�����
	void show();//��¹�
};

Date::Date(int year, int month, int day) {//��� �Լ��� ���� ������� ����
	Year = year;
	Month = month;
	Day = day;
}

Date::Date(string s) {
	int s1, s2, count = 0; // 1��° ������ ��ġ, 2��° ������ ��ġ, ������ ī����
	for (int i = 0; i < s.length(); i++) { // 0���� ���ڿ� ���̱��� �ݺ�
		if (s[i] == '/' && count == 0) { // s[i]�� / �̸鼭 count �� 1�� ���
			s1 = i; // 1��° ������ ��ġ
			count++; // count�� 1 ���� �����ش�
		}
		else if (s[i] == '/' && count == 1) { // s[i]�� / �̸鼭 count �� 1�� ���
			s2 = i; // 2��° ������ ��ġ��
			count++; // count�� 1���� �����ش�.
		}
	}
	Year = stoi(s.substr(0, s1)); // 0~1��° �����ñ��� �߶� ����ȭ
	Month = stoi(s.substr(s1 + 1, s2 - s1 - 1)); // 1��° ������ +1 ~ 2��° ������ -1 ���� �߶� ����ȭ
	Day = stoi(s.substr(s2 + 1, s.length())); // 2��° ������ +1 ~ ������ ����ȭ
}

int Date::getYear() { return Year;}// getYear()�� ���ؼ� Month������ ����

int Date::getMonth() {return Month;}// getMonth()�� ���ؼ� Month������ ����

int Date::getDay() {return Day;}// getDay()�� ���ؼ� Day������ ����

void Date::show() { // ��¹��� ���� void �Լ� show()
	cout << Year << "��" << Month << "��" << Day << "��" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;
}