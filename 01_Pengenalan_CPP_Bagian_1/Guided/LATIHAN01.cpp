// #include <iostream>
// #include <conio.h>

// using namespace std;

// int main()
// {
    // cout << "Saya lagi belajar C++ niii!!!" << endl;

    //int inp;
    //cin >> inp;
    //cout << inp;

    //int w, y, x; float z;
    //x = 7; y = 3; w =1;
    //z = (x + y) / (y + w);
    //cout << "Nilai Z: " << z << endl;

   #include <iostream>
using namespace std;

int main() {
    double tot_pembelian, diskon;

    cout << "Total pembelian: Rp";
    cin >> tot_pembelian;

    // Menghitung diskon
    if (tot_pembelian >= 100000) {
        diskon = 0.05 * tot_pembelian; 
    } else {
        diskon = 0; 
    }

    cout << "Besar diskon = Rp" << diskon << endl;

    return 0;
}

//     int i = 1;
//     int jum;
//     cin >> jum;

//     do {
//         cout << "Baris ke-" << i+1 << endl;
//         i++;
//     } while (i < jum);
//     getch();
    // return 0;
// }