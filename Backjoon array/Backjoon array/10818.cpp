#include <iostream>
using namespace std;

int main() {
	int input;
	int min = 1000000;
	int max = -1000000;

	cin >> input;
	int* save = new int[input];


	for (int i = 0; i < input; i++)
	{
		cin >> save[i];

		if (save[i] > max)
			max = save[i];

		if (save[i] < min)
			min = save[i];
	}

	cout << min << " " << max;
}