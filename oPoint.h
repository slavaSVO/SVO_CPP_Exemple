#ifndef OPOINT_H_INCLUDED
#define OPOINT_H_INCLUDED

#include <iostream>
using namespace std;

class oPoint {
public:
    oPoint();//Конструктор по замовчуванню
    oPoint(int, int);//Конструктор в двомірній системі координат
    oPoint(int, int, int);//Конструктор в тримірній системі координат
    ~oPoint();//Деструктор
    oPoint operator= (oPoint);//Перегрузка оператора присвоювання
    oPoint operator+ (const oPoint&);//Перегрузка оператора присвоювання
    bool operator> (oPoint);//Перегрузка оператора порівняння
    void print();//Метод виведення на друк координт
protected:
private:
    int x;
    int y;
    int z;
};




#endif // OPOINT_H_INCLUDED
