#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point point = { 1, 2 };
    Point* Ppoint = &point;

    cout << "Ppont�� ����Ű�� ��ǥ�� (" << (*Ppoint).x << ", " << (*Ppoint).y << ")�Դϴ�" << endl; //��ȣ �ʼ�
    cout << "Ppont�� ����Ű�� ��ǥ�� (" << Ppoint->x << ", " << Ppoint->y << ")�Դϴ�" << endl;   
    //�� �ΰ��� ��� �� �ϰų� ��� ����
    //cout << "Ppont�� ����Ű�� ��ǥ�� (" << *Ppoint.x << ", " << *Ppoint.y << ")�Դϴ�" << endl;
    //�̰� ����
}