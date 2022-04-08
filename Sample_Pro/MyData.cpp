#include <iostream>
using namespace std;

class MyData {
public:
	//������ ��� ������
	int* m_pnData = nullptr;

public: 
	MyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}

	MyData(const MyData& rhs) {
		cout << "CMDyata(const MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *(rhs.m_pnData);
	}

	//int GetData() {
	//	if (m_pnData != NULL)
	//		return *m_pnData;

	//	return 0;
	//}

	~MyData() {
		delete m_pnData;
		cout << "�Ҹ�" << endl;
	}
};

int main() {
	MyData a(10);
	MyData b(a);
	
	cout << *(a.m_pnData) << endl;	//��ȣ ���� ��� ���� ������ ��ȣ �ִ°� �� �������� ����, ���� 
	cout << *(b.m_pnData) << endl;

	cout << endl;

	MyData* c = new MyData(20);
	MyData* d = c;

	cout << *(c->m_pnData) << endl;	//*((*c).m_pnData)�� ����, ����
	cout << *(d->m_pnData) << endl;

	return 0;
}