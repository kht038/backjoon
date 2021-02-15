#include <iostream>
using namespace std;

int main() {
	int year;
	cin >> year;

	if (year % 4 == 0) {
		if (year % 100 != 0 || year % 400 == 0)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	else
		cout << "0" << endl;

}

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