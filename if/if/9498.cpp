#include<iostream>
using namespace std;

int main() {
	int grade;
	cin >> grade;

	if ( grade >= 90)
		cout << "A" << endl;
	if ( 90 > grade && grade >= 80)
		cout << "B" << endl;
	if ( 80 > grade && grade >= 70)
		cout << "C" << endl;
	if ( 70 > grade && grade >= 60)
		cout << "D" << endl;
	if ( 60 > grade)
		cout << "F" << endl;
}