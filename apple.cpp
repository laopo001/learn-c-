// apple.cpp
class Apple
{
private:
    int people[100];

public:
    // Apple(int i = 10) : apple_number(i){};
    Apple();
    Apple(int i);
    const int apple_number = 10;
    static int hello;
    void take(int num) const;
    int add();
    int add(int num) const;
    int getCount() const;
};