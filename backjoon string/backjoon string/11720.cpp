#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	char st;
	int result = 0;

	for (int i = 0; i < num; i++) {
		cin >> st;
		result += int(st) - 48;
	} 
	cout << result << "\n";
}