#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream input("input.txt");
	if (input.fail()) {
		cout << "파일을 여는 데 실패했습니다" << endl;
		return 1;
	}

	input.seekg(0, ios::end);
	cout << (char)input.get() << endl; //아무것도 안나옴

	input.clear();
	input.seekg(-5, ios::cur); //<- 제 역할을 하지 못하고 있음 c++ 의 스트림은 eofbit라는 플래그를 가지고 있는데, 입출력 함수를 통해 파일의 끝에 도달하게 될 경우 이 "파일의 끝에 도달했다"는 뜻의 플래그가 켜지게 되며 그 이후 입출력 함수가 먹히지 않게 된다
	cout << (char)input.get() << endl; //v가 나와야 하는데 나오지 않음 clear()를 추가하면 v가 나온다

	input.close();

	return 0;
}