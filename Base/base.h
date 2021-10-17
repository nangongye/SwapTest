/*#ifndef __INCLUDE_BASE_H__
#define __INCLUDE_BASE_H__

class Base{
public:
    Base(int x, int y);
    ~Base(){}
    void Swap(int& x, int& y);
private:
    int swapTmp;
    int swapTmp2;
};

#endif*/
#ifndef __BASE_BASE_H__
#define __BASE_BASE_H__
class Base{
public:
    Base(int x, int y);
    ~Base(){}
    void Swap();
    void printInfo();
private:
    int swapTmp;
    int swapTmp2;
};
#endif










