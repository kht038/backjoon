#include <iostream>
using namespace std;

int main() {
	int input, first, second, sum;
	int result;
	int cycle = 0;

	cin >> input;

	if (input < 0 || input > 99)
		return 0;

	result = input;

	while (true)
	{
		if (result < 10) {
			 result = result * 10 + result;
			 cycle++;

			 if (result == input)
				 break;
		}
		else
		{
			first = result / 10;
			second = result % 10;

			sum = first + second;

			result = second * 10 + sum % 10;

			cycle++;

			if (result == input)
				break;
		}
	}
	cout << cycle;
}