#include <iostream>

using namespace std;

struct Variabel{
    int l, p, r, t;
    float phi = 3.14;

    int LuasPersegiPanjang(int p, int l) {
        return p * l;
    }

    float LuasLingkaran(float phi, int r) {
        return phi * r * r;
    }

    float VolumeKerucut(float phi, int r, int t) {
        return 1.0 / 3.0 * phi * r * r * t;
    }

    float VolumeBola(float phi, int r) {
        return 4.0 / 3.0 * phi * r * r * r;
    }
};

struct Variabel Var;

int main(){

    cout << "Luas Persegi Panjang" << endl;
    cout << "Masukkan Panjang: ";
    cin >> Var.p;
    cout << "Masukkan Lebar: ";
    cin >> Var.l;
    cout << "Luas: " << Var.LuasPersegiPanjang(Var.p, Var.l) << endl;

    cout << "======================================" << endl;
    cout << "Luas Lingkaran" << endl;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> Var.r;
    cout << "Luas: " << Var.LuasLingkaran(Var.phi, Var.r) << endl;

    cout << "======================================" << endl;
    cout << "Volume Kerucut" << endl;
    cout << "Masukkan jari-jari kerucut: ";
    cin >> Var.r;
    cout << "Masukkan tinggi: ";
    cin >> Var.t;
    cout << "Volume: " << Var.VolumeKerucut(Var.phi, Var.r, Var.t) << endl;

    cout << "======================================" << endl;
    cout << "Volume Bola" << endl;
    cout << "Masukkan jari-jari bola: ";
    cin >> Var.r;
    cout << "Volume: " << Var.VolumeBola(Var.phi, Var.r) << endl;

    return 0;
}
