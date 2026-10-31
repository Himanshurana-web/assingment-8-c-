// Function to Find Number of Words in a String
#include <iostream>
#include <sstream>
using namespace std;

int countWords(string str)
{
    string word;
    int count = 0;
    stringstream ss(str);

    while (ss >> word)
        count++;

    return count;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of words: " << countWords(str);

    return 0;
}