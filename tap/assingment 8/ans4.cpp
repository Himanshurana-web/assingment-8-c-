// 4. Function to Copy a String from Another String

#include <iostream>
#include <cstring>
using namespace std;

void copyString(char source[], char destination[])
{
    strcpy(destination, source);
}

int main()
{
    char source[100], destination[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    copyString(source, destination);

    cout << "Copied string: " << destination;

    return 0;
}