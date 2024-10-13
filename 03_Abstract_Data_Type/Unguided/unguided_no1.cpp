#include <iostream>
using namespace std;

// Struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    int nim;
    double uts;    // Nilai Ujian Tengah Semester
    double uas;    // Nilai Ujian Akhir Semester
    double tugas;  // Nilai Tugas
    double nilai_akhir;  // Nilai akhir yang dihitung dari UTS, UAS, dan Tugas
};

// Fungsi untuk menghitung nilai akhir
double hitungNilaiAkhir(Mahasiswa &mahasiswa) {
    return 0.3 * mahasiswa.uts + 0.4 * mahasiswa.uas + 0.3 * mahasiswa.tugas;
}

// Fungsi untuk menambahkan data mahasiswa
void tambahkanMahasiswa(Mahasiswa mahasiswas[], int &jumlahMahasiswa) {
    cout << "\nMasukkan detail mahasiswa (nama nim uts uas tugas):\n";
    cin >> mahasiswas[jumlahMahasiswa].nama >> mahasiswas[jumlahMahasiswa].nim 
        >> mahasiswas[jumlahMahasiswa].uts >> mahasiswas[jumlahMahasiswa].uas 
        >> mahasiswas[jumlahMahasiswa].tugas;

    // Hitung nilai akhir
    mahasiswas[jumlahMahasiswa].nilai_akhir = hitungNilaiAkhir(mahasiswas[jumlahMahasiswa]);
    jumlahMahasiswa++;
}

// Fungsi untuk menampilkan daftar mahasiswa
void tampilkanDetailMahasiswa(const Mahasiswa mahasiswas[], int jumlahMahasiswa) {
    if (jumlahMahasiswa > 0) {
        cout << "\nDaftar Detail Mahasiswa:\n";
        cout << "Nama\tNIM\tUTS\tUAS\tTugas\tNilai Akhir\n";
        for (int i = 0; i < jumlahMahasiswa; ++i) {
            cout << mahasiswas[i].nama << "\t" << mahasiswas[i].nim << "\t"
                 << mahasiswas[i].uts << "\t" << mahasiswas[i].uas << "\t"
                 << mahasiswas[i].tugas << "\t" << mahasiswas[i].nilai_akhir << endl;
        }
    } else {
        cout << "Belum ada data mahasiswa.\n";
    }
}

int main() {
    int max_jumlah_mahasiswa = 10;
    Mahasiswa mahasiswas[max_jumlah_mahasiswa];
    int jumlahMahasiswa = 0;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Tampilkan Daftar Mahasiswa\n";
        cout << "3. Keluar\n";
        
        int pilihan;
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahkanMahasiswa(mahasiswas, jumlahMahasiswa);
                break;
            case 2:
                tampilkanDetailMahasiswa(mahasiswas, jumlahMahasiswa);
                break;
            case 3:
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
