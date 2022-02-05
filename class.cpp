#include "class.h"

int Class::multiplyTwo(int a) {
    return 2*a;
}

 optional<int> Class::divide(int a, int b) {
    if(b != 0)
        return a/b;
    else
        return nullopt;
}