#include <iostream>
//Tegar aris DD/14428/4212
using namespace std;
//1. Fungsi penjumlahan 2 bilangan
//2. Fungsi pengurangan 2 bilangan
//3. Fungsi untuk menghitung jumlah nilai total dari arrray
//4. Fungsi rata rata dari array tsb

//1.Fungsi penjumlahan 2 bilangan
int penjumlahan(int a,int b){
    int hasil=a+b;
    return hasil;
}

//2. Fungsi pengurangan 2 bilangan
int pengurangan(int a,int b){
    int hasil=a-b;
}
//3. Fungsi untuk menghitung jumlah nilai total dari arrray
int jumArray(int buddy[]);

//4. Fungsi rata rata dari array tsb
int rataArray(int totalarray,int banyakarray);

int main()
{


    //1. Fungsi penjumlahan 2 bilangan
    int a,b;
    cout <<"1. Fungsi penjumlahan 2 bilangan" << endl;
    cout <<"Masukan bilangan ke-1 : ";
    cin >> a;
    cout <<"Masukan bilangan ke-1 : ";
    cin >> b;
    cout << a <<" + "<< b <<" = " << penjumlahan(a,b) << endl;
    cout <<"=================================================="<< endl;

    //2. Fungsi pengurangan 2 bilangan
    int c,d;
    cout <<"2. Fungsi pengurangan 2 bilangan" << endl;
    cout <<"Masukan bilangan ke-1 : ";
    cin >> c;
    cout <<"Masukan bilangan ke-1 : ";
    cin >> d;
    cout << c <<" + "<< d <<" = "<< pengurangan(c,d) << endl;
    cout <<"=================================================="<< endl;

    //3. Fungsi untuk menghitung jumlah nilai total dari arrray
    cout <<"3. Fungsi untuk menghitung jumlah nilai total dari arrray"<<endl;
    int array1[5]={10,20,30,40,50};
    int total=jumArray(array1);
    cout << "array1[5]={10,20,30,40,50}" << endl;
    cout << "total jumlah dari array adalah = " << total << endl;
    cout <<"=================================================="<< endl;

    //4. Fungsi rata rata dari array tsb
    cout <<"4. Fungsi rata rata dari array tsb"<<endl;
    cout << "Rata Rata dari array tersebut adalah = ";
    cout << rataArray(total,5);
    cout <<"=================================================="<< endl;
    return 0;
}

//3. Fungsi untuk menghitung jumlah nilai total dari arrray
int jumArray(int buddy[]){
    int jumlah=0;
    for(int i=0;i<5;i++)
        jumlah+=buddy[i];
    return jumlah;
}

//4. Fungsi rata rata dari array tsb
int rataArray(int totalarray, int banyakarray){
    int rata=0;
    rata = totalarray/banyakarray;
}

