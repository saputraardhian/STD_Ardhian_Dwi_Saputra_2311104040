#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlahSimpul;
    cout << "Silakan masukan jumlah simpul: ";
    cin >> jumlahSimpul;

    string namaKota[jumlahSimpul];
    int matriksJarak[jumlahSimpul][jumlahSimpul];

    for (int i = 0; i < jumlahSimpul; i++) {
        cout << "Simpul " << i + 1 << " : ";
        cin >> namaKota[i];
    }


    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            if (i == j) {
                matriksJarak[i][j] = 0;  
            } else {
                cout << namaKota[i] << "-->" << namaKota[j] << " : ";
                cin >> matriksJarak[i][j];
            }
        }
    }

    cout << endl << "Matriks jarak antar kota:" << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        for (int j = 0; j < jumlahSimpul; j++) {
            cout << matriksJarak[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
