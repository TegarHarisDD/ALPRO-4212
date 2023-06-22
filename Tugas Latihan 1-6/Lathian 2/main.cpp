#include <iostream>
using namespace std;

struct Sepeda {
    string merk;
    string tipe;
    int tahun;
    int harga;
};
struct Sepeda sepeda;
int main() {
    sepeda.merk = "Polygon";
    sepeda.tipe = "Sepeda Gunung";
    sepeda.tahun = 2013;
    sepeda.harga = 2000000;

    cout << "Merk: " << sepeda.merk << endl;
    cout << "Tipe: " << sepeda.tipe << endl;
    cout << "Tahun: " << sepeda.tahun << endl;
    cout << "Harga: Rp" << sepeda.harga << endl;

    return 0;
}
