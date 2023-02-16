#include <iostream>
using namespace std;

extern int a;

#include <iostream>
#include "apple.cpp"
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

int main()
{
    const int num = 0;
    const int *ptr = &num; // error! const int* -> int*

    const int num2 = 1;
    const int *ptr2 = &num2;

    ptr = ptr2;

    Apple apple;
    Apple apple2(11);
    cout << apple.apple_number << endl;
    cout << apple2.apple_number << endl;

    // Apple::hello = 123;
    cout << Apple::hello << endl;
    return 0;
}