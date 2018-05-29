#ifndef OPOINT_H_INCLUDED
#define OPOINT_H_INCLUDED

#include <iostream>
using namespace std;

class oPoint {
public:
    oPoint();//����������� �� ������������
    oPoint(int, int);//����������� � ������� ������ ���������
    oPoint(int, int, int);//����������� � ������� ������ ���������
    ~oPoint();//����������
    oPoint operator= (oPoint);//���������� ��������� ������������
    oPoint operator+ (const oPoint&);//���������� ��������� ������������
    bool operator> (oPoint);//���������� ��������� ���������
    void print();//����� ��������� �� ���� ��������
protected:
private:
    int x;
    int y;
    int z;
};




#endif // OPOINT_H_INCLUDED
