#include <iostream>
using namespace std;

class MyData {
public:
	//포인터 멤버 데이터
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
		cout << "소멸" << endl;
	}
};

int main() {
	MyData a(10);
	MyData b(a);
	
	cout << *(a.m_pnData) << endl;	//괄호 빼도 상관 없음 하지만 괄호 있는게 더 가독성이 높음, 정적 
	cout << *(b.m_pnData) << endl;

	cout << endl;

	MyData* c = new MyData(20);
	MyData* d = c;

	cout << *(c->m_pnData) << endl;	//*((*c).m_pnData)도 같음, 동적
	cout << *(d->m_pnData) << endl;

	return 0;
}