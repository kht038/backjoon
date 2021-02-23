#include <iostream>
using namespace std;

int main() {
	int A, B, C;

	cin >> A >> B >> C;

	int result[10] = { 0 };
	int save = A * B * C;


	while (save != 0)
	{
		result[save % 10]++;
		save /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << result[i] << "\n";
}