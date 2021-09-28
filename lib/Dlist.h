#ifndef DLIST_LIBRARY_H
#define DLIST_LIBRARY_H

class Dlist{
private:
    double a = 0;
public:
    Dlist();
    Dlist(double);
    double get() const;
    double sideSq() const;
    double radiuc(double f) const;
    double area() const;
    double radKrivVer() const;
    double radKrivYz() const;
    double biggestPoper() const;
    double lenghtToPoper() const;
};

#endif //DLIST_LIBRARY_H
