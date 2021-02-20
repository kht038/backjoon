#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cin >> a >> b;

	while (a > 0 && b > 0)
	{
		cout << a + b << endl;

		if (a <= 0 && b <= 0)
			break;

		cin >> a >> b;
	}
	
}