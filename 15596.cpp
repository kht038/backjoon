#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a) {
	long long ret;
	for (int i = 0; i < a.size(); i++) {
		ret += a[i];
	}
	return ret;
}