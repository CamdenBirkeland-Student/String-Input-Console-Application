#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i = 0; i < 3; ++i) {
        string firstString, secondString;

        cout << "Enter the first string: ";
        getline(cin, firstString);

        cout << "Enter the second string: ";
        getline(cin, secondString);

        string concatenatedString = firstString + secondString;

        cout << "Concatenated string: " << concatenatedString << endl;
    }

    return 0;
}