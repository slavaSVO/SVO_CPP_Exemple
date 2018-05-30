#ifndef OPOINT_H_INCLUDED
#define OPOINT_H_INCLUDED

#include <iostream>
using namespace std;

//I future:
//1 oPoint must have method "move" for three x y z.
//2

class oPoint {
public:
    oPoint();//Конструктор по замовчуванню
    oPoint(int, int);//Конструктор в двомірній системі координат
    oPoint(int, int, int);//Конструктор в тримірній системі координат
    ~oPoint();//Деструктор
    oPoint operator= (oPoint);//Перегрузка оператора присвоювання
    oPoint operator+ (const oPoint&);//Перегрузка оператора присвоювання
    oPoint operator- (const oPoint&);//Перегрузка оператора присвоювання
    bool operator> (oPoint);//Перегрузка оператора порівняння
    void print();//Метод виведення на друк координт
    void moveX(int);//Метод здвигу точки по координаті X
    void moveY(int);//Метод здвигу точки по координаті Y
    void moveZ(int);//Метод здвигу точки по координаті Z
    void moveXYZ(int, int, int);//Метод здвигу точки по координатах XYZ

protected:
private:
    int x;
    int y;
    int z;
};




#endif // OPOINT_H_INCLUDED
