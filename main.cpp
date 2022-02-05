#include <iostream>
#include "class.h"

using namespace std;

int main(int argc, char* argv[]) {
    cout << "HI" << endl;

    Class c;
    if(auto res = c.divide(35,2)) {
        cout << "Divide 35 by two =" << *res << endl;
    }

    if(auto res = c.divide(10,0)) {
        cout << "Divide 35 by two = " << *res << endl;
    } else {
        cout << "Holy shit, you tried divide by zero!" << endl;
    }

    cout << "multiply 10 by 2 =" << c.multiplyTwo(10) << endl;
}