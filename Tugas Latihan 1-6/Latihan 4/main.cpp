#include <iostream>

using namespace std;

// Deklarasi struktur DataMahasiswa
struct DataMahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    // Array statis
    const int n = 3;
    DataMahasiswa dataStatis[n];

    dataStatis[0] = {"123456", "John Doe", "Teknik Informatika", 2020};
    dataStatis[1] = {"234567", "Jane Smith", "Sistem Informasi", 2019};
    dataStatis[2] = {"345678", "Mike Johnson", "Teknik Komputer", 2021};
    dataStatis[2] = {"345678", "Mike Johnson", "Teknik Komputer", 2021};

    cout << "Data Mahasiswa (Array Statis):" << endl;
    cout << "---------------------------------" << endl;
    cout << "NIM\tNama\t\tJurusan\t\t\tTahun Lulus" << endl;
    for (int i = 0; i < n; i++) {
        cout << dataStatis[i].nim << "\t" << dataStatis[i].nama << "\t" << dataStatis[i].jurusan << "\t" << dataStatis[i].tahunLulus << endl;
    }
    cout << endl;


    // Array dinamis
    int nd;
    cout << "Masukkan jumlah data mahasiswa (array dinamis): ";
    cin >> nd;

    DataMahasiswa* dataDinamis = new DataMahasiswa[nd];

    for (int i = 0; i < nd; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "NIM: ";
        cin >> dataDinamis[i].nim;
        cout << "Nama: ";
        cin >> dataDinamis[i].nama;
        cout << "Jurusan: ";
        cin >> dataDinamis[i].jurusan;
        cout << "Tahun Lulus: ";
        cin >> dataDinamis[i].tahunLulus;
    }

    cout << endl;
    cout << "Data Mahasiswa (Array Dinamis):" << endl;
    cout << "---------------------------------" << endl;
    cout << "NIM\tNama\tJurusan\tTahun Lulus" << endl;
    for (int i = 0; i < nd; i++) {
        cout << dataDinamis[i].nim << "\t" << dataDinamis[i].nama << "\t" << dataDinamis[i].jurusan << "\t" << dataDinamis[i].tahunLulus << endl;
    }

    delete[] dataDinamis;

    return 0;
}
