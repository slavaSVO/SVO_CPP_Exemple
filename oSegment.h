#ifndef OSEGMENT_H_INCLUDED
#define OSEGMENT_H_INCLUDED

#include <iostream>
#include "oPoint.h"

using namespace std;

class oSegment {
public:
    oSegment();
    oSegment(oPoint, oPoint);
    ~oSegment();
protected:
private:
    oPoint A;
    oPoint B;
};


#endif // OSEGMENT_H_INCLUDED
