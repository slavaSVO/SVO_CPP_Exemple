#include <iostream>
using namespace std;
#include "oSegment.h"
#include "oPoint.h"


oSegment::oSegment(){
 //   A(0, 0, 0);
 //   B(0, 0, 0);
 ;
};
oSegment::oSegment(oPoint _A, oPoint _B){
    A = _A;
    B = _B;
};
