#include <iostream>
using namespace std;
//#define INWON 3		 
#define SUBJ 4
string subj_name[] = { "국어", "영어", "수학", "JAVA", "C" };

class Student {
	char hakbun[4];
	char name[10];
	int subj[SUBJ + 1];	//tot때문에
	double avg;
	char grade;
	int rank;
	
	//4+10+20+8+4+1 => 47인데 왜 56, 빈자리에 padding(쓰이지 않는 값)이 채워지기 때문

public:
	Student() {
		subj[SUBJ] = 0;
		rank = 1;
		cout << "생성" << endl;
	}
	~Student() {
		cout << "소멸" << endl;
	}
	void input(int i);
	void calc();
	void print();
	int getTot() {
		return subj[SUBJ];
	}
	int getRank() {
		return rank;
	}
	void addRank() {
		rank++;
	}
};

void Student::input(int i) {
	cout << endl <<  i+1 << "번째 학생 입력" << endl;
	cout << "학번을 입력하세요 : ";
	cin >> hakbun;

	cout << "이름을 입력하세요 : ";
	cin >> name;

	for (int i = 0; i < SUBJ; i++) {
		cout << subj_name[i] << "점수를 입력하세요 : ";	 //국어 수학 영어
		cin >> subj[i];

		while (subj[i] < 0 || subj[i] > 100) {
			cout << subj_name[i] << "점수 다시 입력 : ";
			cin >> subj[i];
		}
	}
}

void Student::calc() {
	for (int i = 0; i < SUBJ; i++)
		subj[SUBJ] += subj[i];

	avg = (double)subj[SUBJ] / SUBJ;

	switch ((int)(avg / 10)) {
		case 10:
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		default: grade = 'F'; break;
	}
}

void Student::print() {
	cout << " 이름 : " << name << "   ";
	for (int i = 0; i <= SUBJ; i++) {
		cout << subj[i] << "\t";
	}
	cout << " 평균 : " << avg << "\t" << " 등급 : " << grade << "   " << " 석차 : " << rank << endl;
}

int INWON = 0;

void ranking(Student *stud) {
	for (int i = 0; i < INWON-1; i++) {
		for (int j = i + 1; j < INWON; j++) {
			if (stud[i].getTot() < stud[j].getTot()) stud[i].addRank();
			else if (stud[i].getTot() > stud[j].getTot()) stud[j].addRank();
		}
	}
}



int main()
{
	//Student stu[INWON]; //정적
	
	cin >> INWON;

	Student* stu = new Student[INWON]; //동적_1 -> 생성자 호출 함, stu를 따라가면 방 생성
	//cout << sizeof(stu) << endl;		//4 <- stu가 포인터라서 x86은 4나옴
	//cout << sizeof(stu[0]) << endl;		//56 <- inwon3 subj 4라서

	//Student* stu[INWON];//동적_2 -> 생성자 호출 하지 않음, stu가 생기고 애를 따라가면 3개 방이 생기고 객체를 또 방이 잡힌다, 애를 사용하려면 for(){stu[i] = new Student;}이렇게 해야한다 그래야 또 방이 생성된다
	//cout << sizeof(stu) << endl;		//12 <- 4바이트가 3개라서
	//cout << sizeof(*stu[0]) << endl;		//56 <- 변수 위치에 따라 바뀜
	/*for () {
		stu[i] = new Student;
	}*/

	
	for (int i = 0; i < INWON; i++) {
		stu[i].input(i);
		stu[i].calc();
	}

	ranking(stu);

	cout << endl;

	for (int i = 0; i < INWON; i++) 
		stu[i].print();
}