//Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
#include <iostream>
using namespace std;
int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        cout << "The character '" << character << "' is an alphabet.";
    }
    else if (character >= '0' && character <= '9') {
        cout << "The character '" << character << "' is a digit.";
    }
    else {
        cout << "The character '" << character << "' is a special character.";
    }
    return 0;
}
