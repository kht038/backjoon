#include <stdio.h>
#include <iostream>

using namespace std;
//int main() {
//	int a, b, c = 0;
//	int sample = 1;
//
//	scanf_s("%d %d %d", &a, &b, &c);
//	
//	if (b >= c) {
//		printf("-1");
//	}
//	else
//	{
//		sample = a / (c - b) + 1;
//		printf("%d", sample);
//	}
//
//
//	return 0;
//}	

int main() {
	int input;
	cin >> input;

	int i = 0;
	for (int sum = 2; sum <= input; i++) {
		sum += i * 6;
	}
	if (input == 1)
		cout << 1;
	else
	{
		cout << i;
	}
	
}