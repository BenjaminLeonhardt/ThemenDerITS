#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;

class Testclass
{
    // 4 Bytes
    int var1;

public:
    // 4 Bytes
    int var2 = 2;
    // 4 Bytes
    int var3 = 3;

    // No additional space for following, because this pointer will tell that they
    // are part of this object, RCX register will contain the this pointer before
    // a function gets called
    Testclass() {
        var1 = 1;
        cout << "In Constructor" << endl;
    }
    int get_var1() {
        return var1;
    }
};

int main() {
    // Stack
    // 8 Bytes pointer (64 bit)
    Testclass *sample1 = new Testclass();
    // 4 Bytes
    int ret = 0;

    ret = sample1->get_var1();
    sample1->var2 = 99;
    sample1->var3 = 98;
    delete(sample1);
    cout << ret << endl;

    return 0;
}