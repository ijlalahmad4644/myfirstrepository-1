#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    size_t pos = str.find_first_of("aeiou");
    if (pos != string::npos)
        cout << "First vowel found at position: " << pos << endl;
    else
        cout << "No vowel found" << endl;
    return 0;
}

