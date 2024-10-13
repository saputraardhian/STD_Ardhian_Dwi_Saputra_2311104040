#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a; // pointer p menyimpan alamat a
    cout << "Nilai a melalui pointer p: " << *p << endl; // menampilkan nilai a melalui pointer
    return 0;
}
