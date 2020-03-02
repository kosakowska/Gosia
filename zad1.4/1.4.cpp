#include <iostream>
#include "1.4.h"
using namespace std;

void Circle::show()
{
    cout<<"Promien:"<<radius_<<endl;
}

float Circle::circumference()
{
    return 3.14*2*radius_;
}

float Circle::area()
{
    return 3.14*radius_*radius_;
}

void Circle::show_()
{
    cout<<"Obwod: "<<circumference()<<endl;
    cout<<"Pole: "<<area()<<endl;
}
