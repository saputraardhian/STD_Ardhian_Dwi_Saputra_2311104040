#include <iostream>
#include <cmath>
using namespace std;

class Kerucut {
private:
    double radius;
    double tinggi;

public:
    // Constructor
    Kerucut(double r, double t) : radius(r), tinggi(t) {}

    // Fungsi untuk menghitung volume kerucut
    double volume() {
        return (M_PI * radius * radius * tinggi) / 3;
    }

    // Fungsi untuk menghitung luas permukaan kerucut
    double luasPermukaan() {
        double selimut = sqrt((radius * radius) + (tinggi * tinggi));
        return (M_PI * radius * (radius + selimut));
    }
};

int main() {
    Kerucut k(3, 4); // Membuat objek kerucut dengan jari-jari 3 dan tinggi 4
    cout << "Volume kerucut: " << k.volume() << endl;
    cout << "Luas permukaan kerucut: " << k.luasPermukaan() << endl;
    return 0;
}
