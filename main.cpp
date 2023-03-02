#include <iostream>
using namespace std;

extern int a;

#include <iostream>
#include "apple.cpp"

extern "C"
{
#include "test_c.h"
}

using namespace std;

Apple::Apple() : apple_number(1000)
{
}

Apple::Apple(int i) : apple_number(i)
{
}
int Apple::add()
{
    take(1);
    return 0;
}
int Apple::add(int num) const
{
    take(num);
    return num;
}
void Apple::take(int num) const
{
    cout << "take func " << num << endl;
}
int Apple::getCount() const
{
    take(1);
    return apple_number;
}
int Apple::hello = 666;

class A
{
public:
    char b;
    virtual void fun(){};
};

class A1
{
    virtual void fun() {}
};
class B1
{
    virtual void fun2() {}
};
class C1 : virtual public A1, virtual public B1
{
public:
    virtual void fun3() {}
};

class Test
{
    virtual void fun()
    {
        cout << "fun" << endl;
    }
    virtual void fun2() {}
};

typedef void (*Fun)(void);

int main()
{

    cout << add() << endl;

    cout << "main" << endl;
    // Test *t_ptr = new Test;
    // cout << t_ptr << endl;
    // cout << &t_ptr << endl;
    // cout << &*t_ptr << endl;

    // void *a = (void *)*(unsigned long *)t_ptr;
    // void *b = (void *)*(unsigned long *)a;
    // cout << a << endl;
    // cout << b << endl;
    // Fun fun = (Fun)b;
    // (*fun)();

    // cout << sizeof(A) << endl;
    // cout << sizeof(A1) << " " << sizeof(B1) << " " << sizeof(C1) << endl;
    // const int num = 0;
    // const int *ptr = &num; // error! const int* -> int*

    // const int num2 = 1;
    // const int *ptr2 = &num2;

    // ptr = ptr2;

    // Apple apple;
    // Apple apple2(11);
    // cout << apple.apple_number << endl;
    // cout << apple2.apple_number << endl;

    // // Apple::hello = 123;
    // cout << Apple::hello << endl;
    return 0;
}