#include<iostream>
using namespace std;

int main() {
	int a, b = 0, c = 0, d = 0, e = 0, g = 0;

	int first;

	cin >> first;

	a = first;

	while (1)//first != d)
	{
		if (a < 10)
		{
			a = a * 10 + a;

			g++;

			if (first == a)
				break;
		}
		else
		{
			b = a / 10;
			e = a % 10;
			
			c = e + b;

			d = e * 10 + c % 10;

			a = d;

			g++;

			if (first == d)
				break;
		}
	}
	if (first == 0)
		g++;
	cout << g << "번입니다." << endl;
}