#include<iostream>
using namespace std;

int main() {
	//�׽�Ʈ ���̽�
	int C;
	int looptime = 0;

	// ����,���
	float average;
	float ratio = 100.0f;

	//�л�
	int N;
	int student[1000];
	int scoresum = 0;
	int studentsum = 0;

	cin >> C;

	while (C > looptime)
	{
		cin >> N;
		for (int i = 0; i < N; i++) {
			// ���� �Է�
			cin >> student[i];

			//���� ����
			if (student[i] < 0)
				cin >> student[i];
			if (student[i] > 100)
				cin >> student[i];

			// ���� �հ�
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

		//�ʱ�ȭ
		average = 0;
		scoresum = 0;
		studentsum = 0;
		ratio = 100.0f;

		// ����Ÿ�� ����
		looptime++;
	}
}