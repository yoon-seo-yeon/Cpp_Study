#include <iostream>
using namespace std;

//friend ����
//�������� �ʴ�
//���� ���п� ����Ǵ� ����
//������ �����ε��� �����ϰ� ���

class AAA {
private:
	int data;
};

class BBB {
public:
	void SetData(AAA& aaa, int val) {
		aaa.data = val;	//class AAA�� private ��������
	}
};

int main() {
	AAA aaa;
	BBB bbb;

	bbb.SetData(aaa, 10);

	return 0;
}