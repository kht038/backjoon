#include <iostream>
using namespace std;

int hansu() {
	int N;
	int d;
	int comp = 0;
	int comp2 = 0;
	int result = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (i < 10)
		{
			result++;
			continue;
		}
		if (i < 100) {
			result++;
			continue;
		}
		if (i < 1000) {
			comp = i / 100 - i % 100 / 10;
			comp2 = i % 100 / 10 - i % 10;

			if (comp == comp2)
				result++;
			continue;
		}
	}
	cout << result;
	return 0;
}

int main() {
	hansu();
}