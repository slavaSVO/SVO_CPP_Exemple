#include <iostream>
#include "oPoint.h"

using namespace std;

oPoint::oPoint(){
    x = 0;
    y = 0;
    z = 0;
};
oPoint::oPoint(int _x, int _y){
    x = _x;
    y = _y;
    z = 0;
};
oPoint::oPoint(int _x, int _y, int _z){
    x = _x;
    y = _y;
    z = _z;
};
oPoint::~oPoint(){
    x = NULL;
    y = NULL;
    z = NULL;
};
oPoint oPoint::operator= (oPoint _Point){//���������� ��������� ������������
    x = _Point.x;
    y = _Point.y;
    z = _Point.z;
}
oPoint oPoint::operator+ (const oPoint& _Point){//���������� ��������� ������������
    return oPoint(this->x + _Point.x, this->y + _Point.y, this->z + _Point.z);
}
oPoint oPoint::operator- (const oPoint& _Point){//���������� ��������� ��������
    return oPoint(this->x - _Point.x, this->y - _Point.y, this->z - _Point.z);
}
bool oPoint::operator> (oPoint _Point){//���������� ��������� ���������
    int sumL, sumR;
    sumL = x * x + y * y + z * z;
    sumR = _Point.x * _Point.x + _Point.y * _Point.y + _Point.z * _Point.z;
    if (sumL > sumR)
        return true;
    else
         return false;
}
void oPoint::print(){
    cout << "X = " << x << ", Y = " << y << ", Z = " << z << ".\n";
};
void oPoint::moveX(int shiftX){//����� ������ ����� �� ��������� X
    this->x = x + shiftX;
}
void oPoint::moveY(int shiftY){//����� ������ ����� �� ��������� Y
    this->y = y + shiftY;
}
void oPoint::moveZ(int shiftZ){//����� ������ ����� �� ��������� Z
    this->z = z + shiftZ;
}
void oPoint::moveXYZ(int shiftX, int shiftY, int shiftZ){//����� ������ ����� �� ����������� XYZ
    this->x = x + shiftX;
    this->y = y + shiftY;
    this->z = z + shiftZ;
}
