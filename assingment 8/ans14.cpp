// 14. Function Overloading

#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Integer addition: "
         << c.add(10, 20) << endl;

    cout << "Double addition: "
         << c.add(10.5, 20.5);

    return 0;
}