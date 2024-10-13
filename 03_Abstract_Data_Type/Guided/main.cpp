#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    Mahasiswa mhs;
    inputMhs(mhs);
    float rataNilai = rata2(mhs);
    cout << "Rata-rata nilai: " << rataNilai << endl;

    return 0;
}