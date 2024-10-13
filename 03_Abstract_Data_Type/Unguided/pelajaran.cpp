#include "pelajaran.h"
#include <iostream>
using namespace std;

// Implementasi fungsi create_pelajaran
Pelajaran create_pelajaran(const string &namaMapel, const string &kodeMapel) {
    Pelajaran pel;
    pel.namaMapel = namaMapel;
    pel.kodeMapel = kodeMapel;
    return pel;
}

// Implementasi prosedur tampil_pelajaran
void tampil_pelajaran(const Pelajaran &pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}
