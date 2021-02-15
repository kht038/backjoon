#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	int b;
	cin >> b;

	while (a == 0)
		cin >> a;
	while (b == 0)
		cin >> b;

	if (a > 0)
	{
		if (b > 0)
			cout << "1" << endl;
		else
			cout << "4" << endl;
	}

	if (a < 0)
	{
		if (b > 0)
			cout << "2" << endl;
		else
			cout << "3" << endl;
	}
}
//
//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	int year = 0;
//	cin >> year;
//	bool isYun = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? true : false;
//	cout << isYun << endl;
//}