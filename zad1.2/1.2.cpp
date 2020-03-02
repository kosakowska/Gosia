#include <iostream>
#include "1.2.h"
using namespace std;

void Circle::show()
{
    cout<<"Promien:"<<radius_<<endl;
}

Circle::Circle(float r)
{
   radius_=r;
}
