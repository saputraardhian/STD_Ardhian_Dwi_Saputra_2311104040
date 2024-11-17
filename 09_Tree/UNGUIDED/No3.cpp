#include <iostream>
using namespace std;

// Struktur Pohon
struct Pohon {
    char data;
    Pohon *left, *right;
};

// Fungsi untuk membuat node baru
Pohon* buatNode(char data) {
    return new Pohon{data, NULL, NULL};
}

// Fungsi rekursif untuk menghitung jumlah simpul daun
int cari_simpul_daun(Pohon* node) {
    if (node == NULL) {
        return 0; // Basis: jika node NULL, tidak ada simpul
    }
    if (node->left == NULL && node->right == NULL) {
        return 1; // Basis: jika node adalah simpul daun, kembalikan 1
    }
    // Rekurens: hitung jumlah simpul daun di kiri dan kanan
    return cari_simpul_daun(node->left) + cari_simpul_daun(node->right);
}

// Main program untuk pengujian
int main() {
    // Membuat pohon contoh
    Pohon* root = buatNode('A');
    root->left = buatNode('B');
    root->right = buatNode('C');
    root->left->left = buatNode('D');
    root->left->right = buatNode('E');
    root->right->left = buatNode('F');
    root->right->right = buatNode('G');

    // Hitung jumlah simpul daun
    int jumlahDaun = cari_simpul_daun(root);
    cout << "Jumlah simpul daun dalam Binary Tree: " << jumlahDaun << endl;

    return 0;
}
