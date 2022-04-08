#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point point = { 1, 2 };
    Point* Ppoint = &point;

    cout << "Ppont가 가리키는 좌표는 (" << (*Ppoint).x << ", " << (*Ppoint).y << ")입니다" << endl; //괄호 필수
    cout << "Ppont가 가리키는 좌표는 (" << Ppoint->x << ", " << Ppoint->y << ")입니다" << endl;   
    //위 두개의 출력 중 암거나 상관 읎음
    //cout << "Ppont가 가리키는 좌표는 (" << *Ppoint.x << ", " << *Ppoint.y << ")입니다" << endl;
    //이건 ㄴㄴ
}