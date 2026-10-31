// 13. Single Inheritance

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void inputPerson()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
    float marks;

public:
    void inputStudent()
    {
        inputPerson();

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.inputStudent();
    s.display();

    return 0;
}