#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int Test;
	int Case;

	cin >> Test;

	for (int i = 0; i < Test; i++) {
		cin >> Case >> s;

		for (int j = 0; j < s.length(); j++) {

			for (int o = 0; o < Case; o++) {
				cout << s[j];
			}
		}	
		cout << "\n";
	}
}