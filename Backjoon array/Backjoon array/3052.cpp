#include <iostream>
using namespace std;

int main() {
	const int input = 10;
	const int divine = 42;
	int sum = 0;
	int arr[input];
	bool isdif = true;

	for (int i = 0; i < input; i++)
		cin >> arr[i];

	int save[input] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

	for (int i = 0; i < input; i++) {
		isdif = true;
		for (int j = 0; j < input; j++) {
			if (save[j] == arr[i] % divine) {
				isdif = false;
				break;
			}
		}
		if (isdif)
		{
			save[i] = arr[i] % divine;
			sum++;
		}
	}
	cout << sum;
}