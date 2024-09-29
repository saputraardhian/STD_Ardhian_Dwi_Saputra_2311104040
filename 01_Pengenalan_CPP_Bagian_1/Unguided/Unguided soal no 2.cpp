#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka bulat positif (0-100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        switch (angka) {
            case 0:
                cout << "Nol" << endl;
                break;
            case 1:
                cout << "Satu" << endl;
                break;
            case 2:
                cout << "Dua" << endl;
                break;
            case 3:
                cout << "Tiga" << endl;
                break;
            case 4:
                cout << "Empat" << endl;
                break;
            case 5:
                cout << "Lima" << endl;
                break;
            case 6:
                cout << "Enam" << endl;
                break;
            case 7:
                cout << "Tujuh" << endl;
                break;
            case 8:
                cout << "Delapan" << endl;
                break;
            case 9:
                cout << "Sembilan" << endl;
                break;
            case 10:
                cout << "Sepuluh" << endl;
                break;
            case 11:
                cout << "Sebelas" << endl;
                break;
            case 12:
                cout << "Dua Belas" << endl;
                break;
            case 13:
                cout << "Tiga Belas" << endl;
                break;
            case 14:
                cout << "Empat Belas" << endl;
                break;
            case 15:
                cout << "Lima Belas" << endl;
                break;
            case 16:
                cout << "Enam Belas" << endl;
                break;
            case 17:
                cout << "Tujuh Belas" << endl;
                break;
            case 18:
                cout << "Delapan Belas" << endl;
                break;
            case 19:
                cout << "Sembilan Belas" << endl;
                break;
            default:
                if (angka >= 20 && angka < 100) {
                    cout << (angka / 10 == 2 ? "Dua Puluh" :
                              angka / 10 == 3 ? "Tiga Puluh" :
                              angka / 10 == 4 ? "Empat Puluh" :
                              angka / 10 == 5 ? "Lima Puluh" :
                              angka / 10 == 6 ? "Enam Puluh" :
                              angka / 10 == 7 ? "Tujuh Puluh" :
                              angka / 10 == 8 ? "Delapan Puluh" :
                              "Sembilan Puluh");
                    if (angka % 10 != 0) {
                        cout << " " << (angka % 10 == 1 ? "Satu" :
                                       angka % 10 == 2 ? "Dua" :
                                       angka % 10 == 3 ? "Tiga" :
                                       angka % 10 == 4 ? "Empat" :
                                       angka % 10 == 5 ? "Lima" :
                                       angka % 10 == 6 ? "Enam" :
                                       angka % 10 == 7 ? "Tujuh" :
                                       angka % 10 == 8 ? "Delapan" :
                                       "Sembilan");
                    }
                    cout << endl;
                }
                break;
        }
    } else {
        cout << "Angka tidak valid! Harap masukkan angka antara 0 hingga 100." << endl;
    }

    return 0;
}
