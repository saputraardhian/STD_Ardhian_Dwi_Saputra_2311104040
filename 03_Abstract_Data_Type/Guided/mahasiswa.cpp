#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(Mahasiswa& m) {
    cout << "Masukkan Nama: ";
    cin >> m.nim;
    cout << "Masukkan Nilai 1: ";
    cin >> m.nilai1;
    cout << "Masukkan Nilai 2: ";
    cin >> m.nilai2;
}

float rata2(const Mahasiswa& m) {
    return (m.nilai1 + m.nilai2) / 2.0f; 
}