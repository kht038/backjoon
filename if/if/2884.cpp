#include <iostream>
using namespace std;

//int main(void) {
//
//    int a, b;
//
//    cin >> a >> b;
//
//    if (b < 45) {
//        b += 15;
//        if (--a < 0)
//            a = 23;
//    }
//
//    else
//        b -= 45;
//
//    cout << a << " " << b << endl;
//}

int main()
{
	int H, M;

	cin >> H >> M;

	if (M < 45)
	{
		M += 15;

		if (--H < 0)
			H = 23;
	}
	else {
		M -= 45;
	}

	cout << H << " " << M << endl;
}