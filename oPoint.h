#ifndef OPOINT_H_INCLUDED
#define OPOINT_H_INCLUDED

#include <iostream>
using namespace std;

//I future:
//1 oPoint must have method "move" for three x y z.
//2

class oPoint {
public:
    oPoint();//����������� �� ������������
    oPoint(int, int);//����������� � ������� ������ ���������
    oPoint(int, int, int);//����������� � ������� ������ ���������
    ~oPoint();//����������
    oPoint operator= (oPoint);//���������� ��������� ������������
    oPoint operator+ (const oPoint&);//���������� ��������� ������������
    oPoint operator- (const oPoint&);//���������� ��������� ������������
    bool operator> (oPoint);//���������� ��������� ���������
    void print();//����� ��������� �� ���� ��������
    void moveX(int);//����� ������ ����� �� ��������� X
    void moveY(int);//����� ������ ����� �� ��������� Y
    void moveZ(int);//����� ������ ����� �� ��������� Z
    void moveXYZ(int, int, int);//����� ������ ����� �� ����������� XYZ

protected:
private:
    int x;
    int y;
    int z;
};




#endif // OPOINT_H_INCLUDED
