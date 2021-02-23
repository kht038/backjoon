#include<iostream>
using namespace std;

int main() {
	//테스트 케이스
	int C;
	int looptime = 0;

	// 비율,평균
	float average;
	float ratio = 100.0f;

	//학생
	int N;
	int student[1000];
	int scoresum = 0;
	int studentsum = 0;

	cin >> C;

	while (C > looptime)
	{
		cin >> N;
		for (int i = 0; i < N; i++) {
			// 점수 입력
			cin >> student[i];

			//점수 조건
			if (student[i] < 0)
				cin >> student[i];
			if (student[i] > 100)
				cin >> student[i];

			// 점수 합계
			scoresum += student[i];
		}
		average = scoresum / N;

		for (int i = 0; i < N; i++) {
			if (average < student[i]) {
				studentsum++;
			}
		}
		ratio = ratio / N;
		ratio = ratio * studentsum;
		cout << fixed;
		cout.precision(3);
		cout << ratio << "%" << "\n";

		//초기화
		average = 0;
		scoresum = 0;
		studentsum = 0;
		ratio = 100.0f;

		// 루프타임 증가
		looptime++;
	}
}