#include <iostream>
using namespace std;

int main()
{
	int input[9];
	int max = 0;
	int num = 0;

	for (int i = 0; i < 9; i++) {
		cin >> input[i];

		if (max < input[i]) {
			max = input[i];
			num = i;
		}
	}
	cout << max << " " << num + 1;
}