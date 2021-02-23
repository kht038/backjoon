#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char OX[80];

	int sum = 0;
	int isright = 0;
	int testcase = 0;
	int input; 

	cin >> input;
	
	while (input > testcase)
	{
		cin >> OX;

		for (int i = 0; i < strlen(OX); i++)
		{
			if (OX[i] == 'O') {
				isright++;
				sum = sum + isright;
			}
			else {
				isright = 0;
			}
		}
		cout << sum << "\n";
		sum = 0;
		isright = 0;

		testcase++;
	}
}
