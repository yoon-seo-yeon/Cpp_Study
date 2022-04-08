#include <iostream>
using namespace std;

template <class T>
class MyData {
private:
	T mydata;

public:
	void SetData(T pdata);

	T GetData();
};

void main() {
	//<int>와 <double>을 빼면 오류난다. 반드시 써줘야 한다
	MyData<int>mydata1;
	MyData<double>mydata2;

	mydata1.SetData(5);
	cout << mydata1.GetData() << "   ";

	mydata2.SetData(5.1);
	cout << mydata2.GetData() << endl;
}

template <class T>
void MyData<T>::SetData(T pdata) {
	mydata = pdata;
}

template <class T>
T  MyData<T>::GetData() {
	return mydata;
}