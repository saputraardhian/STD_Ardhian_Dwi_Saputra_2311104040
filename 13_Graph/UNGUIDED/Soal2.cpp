#include <iostream>
using namespace std;

int main() {

    int totalSimpul, totalSisi;
    
    // Input jumlah simpul dan sisi
    cout << "Masukkan jumlah simpul: ";
    cin >> totalSimpul;
    cout << "Masukkan jumlah sisi: ";
    cin >> totalSisi;

    // Inisialisasi matriks adjacency
    int matriksAdjacency[totalSimpul][totalSimpul];

    for (int i = 0; i < totalSimpul; i++) {
        for (int j = 0; j < totalSimpul; j++) {
            matriksAdjacency[i][j] = 0;
        }
    }

    // Input pasangan simpul yang terhubung
    cout << "Masukkan pasangan simpul yang terhubung (misal: 1 2):\n";
    for (int i = 0; i < totalSisi; i++) {
        int simpulAwal, simpulAkhir;
        cin >> simpulAwal >> simpulAkhir;
        
        // Update matriks adjacency
        matriksAdjacency[simpulAwal-1][simpulAkhir-1] = 1;
        matriksAdjacency[simpulAkhir-1][simpulAwal-1] = 1;  // Graf tak berarah
    }

    // Tampilkan matriks adjacency
    cout << "Matriks Adjacency:\n";
    for (int i = 0; i < totalSimpul; i++) {
        for (int j = 0; j < totalSimpul; j++) {
            cout << matriksAdjacency[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
