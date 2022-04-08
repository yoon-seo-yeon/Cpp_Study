#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream src("file_copy(¿¹Á¦_5).cpp");
	ofstream tar("target.txt");

	char szbuffer[1024];
	int nread;

	for (;;) {
		src.read(szbuffer, 1024);
		nread = src.gcount();
		tar.write(szbuffer, nread);
		if (nread == 0) {
			break;
		}
	}
	src.close();
	tar.close();
}