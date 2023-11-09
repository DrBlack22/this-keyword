#include <iostream>
#include "sizzling.h"
using namespace std;
sizzling::sizzling(int num)
:s(num)
{

}

void sizzling::printSizzling(){
    cout << "s = " << s << endl;
    cout << "this -> s = " << this->s << endl;
    cout << "(*this).s = " << (*this).s << endl;
}

// 's' is implied i.e. sizzling class has a variable s, cout that
// 'this->s' is explicit i.e. so object in sizzling class has a variable s, print that out
// '(*this).s' is explicit i.e. accesses memory address of 's' variable in so object and sets it equal to 43
