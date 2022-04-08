/*
실 = 0, 허 = 0
실 = 0
허 = 0
허 > 0
허 < 0
*/
#include <iostream>
#include < stdlib.h >
using namespace std;

class Complex {
private:
	int real;
	int imaginary;

public:
	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {

	}

	Complex() {
		real = 0;
		imaginary = 0;
	}

	Complex &operator+(Complex &c) {
		Complex ctemp;

		ctemp.real = this->real + c.real;
		ctemp.imaginary = this->imaginary + c.imaginary;

		//this->real= this->real + c.real;
		//this->imaginary = this->imaginary + c.imaginary;

		return ctemp;
	}

	Complex& operator-(Complex& c) {
		Complex ctemp;

		ctemp.real = this->real - c.real;
		ctemp.imaginary = this->imaginary - c.imaginary;

		//this->real = this->real - c.real;
		//this->imaginary = this->imaginary - c.imaginary;

		return ctemp;
	}

	Complex& operator*(Complex& c) {
		Complex ctemp;

		ctemp.real = (this->real * c.real) - (this->imaginary * c.imaginary);
		ctemp.imaginary = (this->real * c.real) + (this->imaginary * c.imaginary);

		return ctemp;
	}

	Complex& operator++() {		//++전위
		++this->real;

		return *this;
	}

	Complex operator++(int) {	//후위++
		Complex ctemp;

		ctemp.real = this->real++;
		ctemp.imaginary = this->imaginary;

		return ctemp;
	}

	Complex& operator--() {		//--전위
		--this->real;
		return *this;
		/*Complex ctemp;
		ctemp.real = --this->real;
		ctemp.imaginary = this->imaginary;

		return ctemp;*/
	}

	Complex operator--(int) {	//후위--
		Complex ctemp;

		ctemp.real = this->real--;
		ctemp.imaginary = this->imaginary;

		return ctemp;
	}

	void print() {
		if (real == 0 && imaginary == 0) {			//실수 허수 모두 0
			cout << 0 << endl;
		}

		else if (imaginary == 1) {					//허수 1
			if (real == 0) {
				cout << "i" << endl;
			}
			else {
				cout << real << "+" << "i" << endl;
			}
		}

		else if (imaginary < 0) {					//허수 0보다 작을 때(음수)
			if ((abs(imaginary))==1) {				//허수가 음수이고 1일 때
				cout << real << "-" << "i" << endl;
			}

			else if (real == 0) {					//허수가 0보다 작고 실수가 0일 때
				cout << imaginary << "i" << endl;
			}

			else {									//허수가 음수이고 1이 아닐 때
				cout << real << imaginary << "i" << endl; 
			}
		}

		else if (imaginary == 0) {					//허수가 0일 때
			cout << real << endl;
		}

		else if (real == 0) {						//실수가 0일 때
			cout << imaginary << "i" << endl;
		}

		else {										//그 아무것도 아닐 때
			cout << real << "+" << imaginary << "i" << endl;
		}
	}
};

int main() {
	cout << "**********" << endl;
	Complex c1(0, 0);
	Complex c2(1, 1);
	Complex c3(2, 2);

	c1.print();		//0
	c2.print();		//1+i
	c3.print();		//2+2i

	Complex c4(0, -2);
	c4.print();		//-2i

	Complex c5(-5, 0);
	c5.print();		 //-5

	Complex c6(3, 0);
	c6.print();		//3

	Complex c7(0, 7); 
	c7.print();		//7i
	cout << "----------" << endl;
	c1 = c2 + c3;	
	//c3 = c1.operator+(c2);
	c1.print();
	c2.print();
	c3.print();		
	cout << "&&&&&&&&&&" << endl;
	c7 = c1 - c4;	
	//c1.operator-(c4);
	c1 = c7 - c2; 
	c6 = c2 * c4; 
	c1.print();
	c2.print();
	c4.print();
	c6.print();
	c7.print();
	cout << "$$$$$$$$$$" << endl;
	Complex c8;
	Complex c9;
	c9 = ++c4;
	c4.print();	
	c8.print();
	c9.print();
	cout << "%%%%%%%%%%" << endl;
	Complex c10;
	c10 = c4++;
	c4.print();
	c10.print();

	cout << "##########" << endl;
	
	Complex c11;
	c11 = c2--;
	c2.print();		
	c11.print();	
	cout << "!!!!!!!!!!" << endl;
	Complex c12;
	c12 = --c2;
	c2.print();		
	c12.print();	

	return 0;
}