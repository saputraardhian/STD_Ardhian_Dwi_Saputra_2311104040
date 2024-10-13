#include <iostream>
#include <cstdlib> // Mengganti <stdlib.h> dengan <cstdlib>
using namespace std;

struct Mahasiswa {
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(Mahasiswa &m);
float rata2(Mahasiswa m);

int main() {
    Mahasiswa mhs;
    inputMhs(mhs);
    cout << "Rata-rata = " << rata2(mhs) << endl; // Mengganti tanda kutip
    return 0;
}

void inputMhs(Mahasiswa &m) {
    cout << "Input NIM: ";
    cin >> m.nim; // Menghapus tanda kurung tambahan
    cout << "Input nilai 1: ";
    cin >> m.nilai1;
    cout << "Input nilai 2: ";
    cin >> m.nilai2;
}

float rata2(Mahasiswa m) {
    return (m.nilai1 + m.nilai2) / 2.0; // Menggunakan 2.0 untuk hasil float
}