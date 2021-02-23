#include<iostream>
using namespace std;

int main() {
	int n;
	int subject[1000] = {};
	int max = 0;
	double output = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> subject[i];
		if(subject[i] > max)
			max = subject[i];
		output += subject[i];
	}
	output = (output / max * 100) / n;

	cout.precision(6);
	cout << output;
}