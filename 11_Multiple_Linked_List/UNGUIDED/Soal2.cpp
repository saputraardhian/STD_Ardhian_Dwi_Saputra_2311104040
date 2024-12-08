#include <iostream>
#include <string>

using namespace std;

// Struktur untuk data buku
struct Buku {
    string judulBuku;
    string tanggalPengembalian;
    Buku* next;
};

// Struktur untuk data anggota
struct Anggota {
    string namaAnggota;
    string idAnggota;
    Buku* headBuku;
    Anggota* next;
};

// Fungsi untuk membuat node anggota baru
Anggota* buatAnggota(string nama, string id) {
    Anggota* anggotaBaru = new Anggota;
    anggotaBaru->namaAnggota = nama;
    anggotaBaru->idAnggota = id;
    anggotaBaru->headBuku = nullptr;
    anggotaBaru->next = nullptr;
    return anggotaBaru;
}

// Fungsi untuk membuat node buku baru
Buku* buatBuku(string judul, string tanggal) {
    Buku* bukuBaru = new Buku;
    bukuBaru->judulBuku = judul;
    bukuBaru->tanggalPengembalian = tanggal;
    bukuBaru->next = nullptr;
    return bukuBaru;
}

// Fungsi untuk menambahkan anggota ke daftar anggota
void tambahAnggota(Anggota*& head, Anggota* anggotaBaru) {
    if (!head) {
        head = anggotaBaru;
    } else {
        Anggota* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = anggotaBaru;
    }
}

// Fungsi untuk menambahkan buku yang dipinjam oleh anggota
void tambahBuku(Anggota* anggota, Buku* bukuBaru) {
    if (!anggota->headBuku) {
        anggota->headBuku = bukuBaru;
    } else {
        Buku* temp = anggota->headBuku;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = bukuBaru;
    }
}

// Fungsi untuk menghapus anggota beserta buku yang dipinjam
void hapusAnggota(Anggota*& head, string idAnggota) {
    Anggota* temp = head;
    Anggota* prev = nullptr;

    while (temp && temp->idAnggota != idAnggota) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {
        cout << "Anggota dengan ID " << idAnggota << " tidak ditemukan." << endl;
        return;
    }

    if (!prev) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    // Hapus semua buku yang dipinjam oleh anggota
    Buku* currentBuku = temp->headBuku;
    while (currentBuku) {
        Buku* toDelete = currentBuku;
        currentBuku = currentBuku->next;
        delete toDelete;
    }

    delete temp;
    cout << "Anggota dengan ID " << idAnggota << " berhasil dihapus beserta buku yang dipinjam." << endl;
}

// Fungsi untuk menampilkan data anggota dan buku yang dipinjam
void tampilkanData(Anggota* head) {
    Anggota* tempAnggota = head;
    while (tempAnggota) {
        cout << "Anggota: " << tempAnggota->namaAnggota << " (ID: " << tempAnggota->idAnggota << ")" << endl;
        Buku* tempBuku = tempAnggota->headBuku;
        while (tempBuku) {
            cout << "  - Buku: " << tempBuku->judulBuku << " (Pengembalian: " << tempBuku->tanggalPengembalian << ")" << endl;
            tempBuku = tempBuku->next;
        }
        tempAnggota = tempAnggota->next;
    }
}

int main() {
    Anggota* daftarAnggota = nullptr;

    // Tambah data anggota
    tambahAnggota(daftarAnggota, buatAnggota("Rani", "A001"));
    tambahAnggota(daftarAnggota, buatAnggota("Dito", "A002"));
    tambahAnggota(daftarAnggota, buatAnggota("Vina", "A003"));

    // Tambah buku yang dipinjam
    tambahBuku(daftarAnggota, buatBuku("Pemrograman C++", "01/12/2024")); // Untuk Rani
    tambahBuku(daftarAnggota->next, buatBuku("Algoritma Pemrograman", "15/12/2024")); // Untuk Dito

    // Tambah buku baru untuk Rani
    tambahBuku(daftarAnggota, buatBuku("Struktur Data", "10/12/2024"));

    // Hapus anggota Dito beserta buku yang dipinjam
    hapusAnggota(daftarAnggota, "A002");

    // Tampilkan data
    cout << "Data Anggota dan Buku yang Dipinjam:" << endl;
    tampilkanData(daftarAnggota);

    return 0;
}
