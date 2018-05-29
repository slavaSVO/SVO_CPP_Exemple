#include <iostream>
#include "oPoint.h"
#include "oSegment.h"

using namespace std;

int main()
{
    oPoint A(2, 3, 5);
    cout << "A = \n";
    A.print();
    oPoint B;
    B = A;
    cout << "B = \n";
    B.print();
    oPoint C(5, 7, 9);
    if (A > C)
        cout << "A > C\n";
    else
        cout << "A < C\n";
    cout << "A = ";
    A.print();
    cout << "C = ";
    C.print();
    cout << "A + C = ";
    A = A + C;
    A.print();
    return 0;
}
