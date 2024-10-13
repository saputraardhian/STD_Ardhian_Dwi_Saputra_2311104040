#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    // Membuat pelajaran baru
    Pelajaran pel = create_pelajaran(namapel, kodepel);

    // Menampilkan detail pelajaran
    tampil_pelajaran(pel);

    return 0;
}
