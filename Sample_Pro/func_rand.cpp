#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned)time(0));	//꼭 넣어줘야 함 아니면 맨날 결과가 똑같음

	for (int i = 0; i < 100; i++) {
		cout << i + 1 << " : " << rand() % 6+5<< endl;
	}
	//결과는 똑같다
	//그 이유는 rand()는 현재 시간을 가지고 계산한다
	return 0;
}
//rand() % 10 + 1  1~10
//rand() % 6+5		5~10
//12~50은 rand()%39+12
//계산할때
//12~50은 0~38 -> 38+1한 값으로 나머지를 구하고 첫번째 수인 12를 더한다
//15~27은 0~12 -> rand()%13+15