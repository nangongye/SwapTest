#include "base.h"
#include<iostream>
using namespace std;
Base::Base(int x, int y)
    :swapTmp(x),
     swapTmp2(y)
{}

void Base::Swap(){
    int temp = swapTmp;
    swapTmp = swapTmp2;
    swapTmp2 = temp;
}
void Base::printInfo(){
    cout<<"变换："<<endl;
    cout<<"swapTemp:" <<swapTmp << endl;
    cout<<"swaptemp2: " <<swapTmp2 << endl;
}