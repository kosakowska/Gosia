#include <iostream>
#include "1.4.h"
using namespace std;

int main()
{
    Circle jeden,dwa;
    jeden.radius_=5;
    dwa.radius_=3;
    jeden.show();
    jeden.circumference();
    jeden.area();
    jeden.show_();
    dwa.show();
    dwa.circumference();
    dwa.area();
    dwa.show_()
    return 0;
}
