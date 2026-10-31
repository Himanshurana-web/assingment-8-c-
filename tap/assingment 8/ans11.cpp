// 11. Class Car with Multiple Objects

#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    float price;

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Car car1, car2;

    car1.brand = "Toyota";
    car1.price = 1500000;

    car2.brand = "Honda";
    car2.price = 1200000;

    cout << "Car 1\n";
    car1.display();

    cout << "\nCar 2\n";
    car2.display();

    return 0;
}