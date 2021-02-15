#include<iostream>
using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	int first, second, third;
	first = b / 100;
	b = b % 100;
	second = b / 10;
	b = b % 10;
	third = b / 1;

	cout << third * a << endl;
	cout << second * a << endl;
	cout << first * a << endl;

	cout << first * a * 100 + second * a * 10 + third * a << endl;
}