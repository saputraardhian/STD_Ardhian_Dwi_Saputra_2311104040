#include <iostream>

using namespace std;

int main() {
    int bill = 2, bil2 = 3;
    bool hasil;

    hasil = (bill <= bil2) && (bill < bil2);
    cout << hasil << endl;

    hasil = (bill > bil2) || (bill < bil2);
    cout << hasil << endl;

    hasil = !(bill > bil2) || (bill < 1122);
    cout << hasil << endl;

    return 0;
}

