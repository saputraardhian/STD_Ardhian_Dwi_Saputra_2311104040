#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilkanArray2D(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukarkan elemen dari dua array 2D pada posisi tertentu
void tukarElemenArray(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

// Fungsi untuk menukarkan isi variabel yang ditunjuk oleh dua pointer
void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Dua array 2D integer 3x3
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Dua pointer integer
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Menampilkan array sebelum penukaran
    cout << "Array 1 sebelum penukaran:\n";
    tampilkanArray2D(arr1);
    cout << "Array 2 sebelum penukaran:\n";
    tampilkanArray2D(arr2);

    // Menukarkan elemen array di posisi (1, 1)
    tukarElemenArray(arr1, arr2, 1, 1);

    // Menampilkan array setelah penukaran elemen
    cout << "\nArray 1 setelah penukaran elemen (1, 1):\n";
    tampilkanArray2D(arr1);
    cout << "Array 2 setelah penukaran elemen (1, 1):\n";
    tampilkanArray2D(arr2);

    // Menampilkan nilai sebelum penukaran pointer
    cout << "\nNilai sebelum penukaran pointer: \n";
    cout << "Nilai ptr1: " << *ptr1 << "\n";
    cout << "Nilai ptr2: " << *ptr2 << "\n";

    // Menukarkan isi variabel yang ditunjuk oleh dua pointer
    tukarPointer(ptr1, ptr2);

    // Menampilkan nilai setelah penukaran pointer
    cout << "\nNilai setelah penukaran pointer: \n";
    cout << "Nilai ptr1: " << *ptr1 << "\n";
    cout << "Nilai ptr2: " << *ptr2 << "\n";

    return 0;
}
