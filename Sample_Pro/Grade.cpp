#include <iostream>
using namespace std;
//#define INWON 3		 
#define SUBJ 4
string subj_name[] = { "����", "����", "����", "JAVA", "C" };

class Student {
	char hakbun[4];
	char name[10];
	int subj[SUBJ + 1];	//tot������
	double avg;
	char grade;
	int rank;
	
	//4+10+20+8+4+1 => 47�ε� �� 56, ���ڸ��� padding(������ �ʴ� ��)�� ä������ ����

public:
	Student() {
		subj[SUBJ] = 0;
		rank = 1;
		cout << "����" << endl;
	}
	~Student() {
		cout << "�Ҹ�" << endl;
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
	cout << endl <<  i+1 << "��° �л� �Է�" << endl;
	cout << "�й��� �Է��ϼ��� : ";
	cin >> hakbun;

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;

	for (int i = 0; i < SUBJ; i++) {
		cout << subj_name[i] << "������ �Է��ϼ��� : ";	 //���� ���� ����
		cin >> subj[i];

		while (subj[i] < 0 || subj[i] > 100) {
			cout << subj_name[i] << "���� �ٽ� �Է� : ";
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
	cout << " �̸� : " << name << "   ";
	for (int i = 0; i <= SUBJ; i++) {
		cout << subj[i] << "\t";
	}
	cout << " ��� : " << avg << "\t" << " ��� : " << grade << "   " << " ���� : " << rank << endl;
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
	//Student stu[INWON]; //����
	
	cin >> INWON;

	Student* stu = new Student[INWON]; //����_1 -> ������ ȣ�� ��, stu�� ���󰡸� �� ����
	//cout << sizeof(stu) << endl;		//4 <- stu�� �����Ͷ� x86�� 4����
	//cout << sizeof(stu[0]) << endl;		//56 <- inwon3 subj 4��

	//Student* stu[INWON];//����_2 -> ������ ȣ�� ���� ����, stu�� ����� �ָ� ���󰡸� 3�� ���� ����� ��ü�� �� ���� ������, �ָ� ����Ϸ��� for(){stu[i] = new Student;}�̷��� �ؾ��Ѵ� �׷��� �� ���� �����ȴ�
	//cout << sizeof(stu) << endl;		//12 <- 4����Ʈ�� 3����
	//cout << sizeof(*stu[0]) << endl;		//56 <- ���� ��ġ�� ���� �ٲ�
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