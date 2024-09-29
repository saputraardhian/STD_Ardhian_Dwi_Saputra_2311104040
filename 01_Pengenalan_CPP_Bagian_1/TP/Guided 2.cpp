#include <iostream>
using namespace std;

int main() {
    int bill = 3, bil2 = 4, hasil1; 

    float bil3 = 3.0, bil4 = 4.0, hasil2; 

    hasil1 = bill + bil2; 
    cout << hasil1 << endl; 

    hasil1 = bill - bil2; 
    cout << hasil1 << endl;

    hasil1 = bill * bil2; 
    cout << hasil1 << endl;

    hasil1 = bill / bil2; 
    cout << hasil1 << endl;

    hasil1 = bil2 / bill; 
    cout << hasil1 << endl;

    hasil1 = bill % bil2; 
    cout << hasil1 << endl;

    hasil1 = bil2 % bill; 
    cout << hasil1 << endl;

    hasil2 = bil3 / bil4; 
    cout << hasil2 << endl;

    return 0;
}