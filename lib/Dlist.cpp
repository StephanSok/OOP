#include "Dlist.h"
#include <iostream>
#include <cmath>

Dlist::Dlist():a(0){}
Dlist::Dlist(double b) {
    a = b;
}
double Dlist::get() const{
    return a;
}
double Dlist::sideSq() const{
    return 3*a/(sqrt(2));
}
double Dlist::radiuc(double f) const{
    return 3*a*cos(f)*sin(f)/(pow(cos(f), 3) + pow(sin(f), 3));
}
double Dlist::area() const{
    return 3*a*a/2;
}
double Dlist::radKrivVer() const{
    return 3*a/(8*sqrt(2));
}
double Dlist::radKrivYz() const{
    return 3*a/sqrt(2);
}
double Dlist::biggestPoper() const{
    return a*sqrt(2*sqrt(3) - 3)*sqrt(2);
}
double Dlist::lenghtToPoper() const{
    return a*sqrt(3)/sqrt(2);
}



