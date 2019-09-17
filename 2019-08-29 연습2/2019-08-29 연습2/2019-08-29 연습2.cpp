#include<iostream>
using namespace std;
int main() 
{
	cout << "금액 입력시 필요한 지폐와 동전의 개수 나타내기" << endl;
	int totalmoney;
	int a[]={ 50000, 10000, 5000, 1000, 500, 100, 50, 10, 1 };

	cout << "금액 입력하기 : ";
	cin >> totalmoney;
	for (int i = 0; totalmoney <= 0; i++)
	{
		int count = 0;
		if (totalmoney >= a[i])
		{
			while (totalmoney < a[i])
			{
					totalmoney = totalmoney - a[i];
					count++;
			}
		}

		cout << a[i] << "원 : " << count << "개" << endl;

	}


	


}