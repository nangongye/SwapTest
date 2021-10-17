#include<iostream>
#include "base.h"
using namespace std;

void test(){
    //vector<int>Temp = {23,34};
    Base b(12,34);
    b.printInfo();
    b.Swap();
    b.printInfo();
}
int main(){
    test();
    return 0;
}