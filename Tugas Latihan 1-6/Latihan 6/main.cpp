#include <iostream>
using namespace std;

enum Nilai {
    A,
    B,
    C,
    D,
    E
};

int main() {
    Nilai nilaiMahasiswa = B;
    cout << "Nilai Mahasiswa: ";
    switch (nilaiMahasiswa) {
        case A:
            cout << "A" << endl;
            break;
        case B:
            cout << "B" << endl;
            break;
        case C:
            cout << "C" << endl;
            break;
        case D:
            cout << "D" << endl;
            break;
        case E:
            cout << "E" << endl;
            break;
        default:
            cout << "Tidak diketahui" << endl;
    }

    return 0;
}
