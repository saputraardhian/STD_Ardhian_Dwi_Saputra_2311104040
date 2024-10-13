#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

// Definisi tipe data pelajaran
struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Fungsi untuk membuat pelajaran baru
Pelajaran create_pelajaran(const string &namaMapel, const string &kodeMapel);

// Prosedur untuk menampilkan detail pelajaran
void tampil_pelajaran(const Pelajaran &pel);

#endif
