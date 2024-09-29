#include <iostream>
#include <string>

using namespace std;
string generateSequence(int n) {
    string sequence = "";
    int product = 1;
    for (int i = n; i > 0; i--) {
        sequence += to_string(i);
        product *= i;
        if (i > 1) {
            sequence += " ";
        }
    }
    sequence += " = " + to_string(product);
    return sequence;
}

int main() {
    int userInput;
    cout << "Please enter a value: ";
    cin >> userInput;
    cout << generateSequence(userInput) << std::endl;
    return 0;
}