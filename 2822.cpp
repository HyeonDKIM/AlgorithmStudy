#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

	int score[8];//정렬 후
	int sum = 0;
	int QuestionNum[8] = { 0,0,0,0,0,0,0,0 };

	for (int i = 0; i < 8; i++)
	{
		cin >> score[i];
	}


	int score2[8] = { score[0],score[1],score[2],score[3], score[4], score[5], score[6], score[7] };


	sort(score, score + 8);
	sum = score[3] + score[4] + score[5] + score[6] + score[7];

	cout << sum << endl;


	for (int i = 0; i < 8; i++) {
		for (int j = 3; j < 8; j++) {
			if (score2[i] == score[j])
			{
					QuestionNum[i] = i;
			}
		}
	}

	sort(QuestionNum, QuestionNum+8);

	for (int i = 3; i < 8; i++)
	{
		cout << QuestionNum[i] + 1 << " ";
	}
}
