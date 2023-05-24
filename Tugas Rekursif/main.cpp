#include <iostream>

using namespace std;

int Penjumlahan(int a,int b){
    if(a!=0)
        return 1 + Penjumlahan(a-1,b);
    if(b!=0)
        return 1 + Penjumlahan(a,b-1);
    else
        return 0;
}

int Pengurangan(int a,int b){
    if(b==0)
        return a;
    else
        return -1+Pengurangan(a,b-1);
}

int Perkalian(int a,int b){
    if(b==1)
        return a;
    else
        return a+Perkalian(a,b-1);
}

int Pembagian(int a, int b){
    if(a<b)
        return 0;
    else
        return 1 + Pembagian(a-b,b);
}

int Pangkat(int a,int b){
    if(b==1)
        return a;
    else
        return a*Perkalian(a,b-1);
}
int main()
{
    cout << Penjumlahan(3,4) << endl;
    cout << Pengurangan(0,4) << endl;
    cout << Perkalian(2,4) << endl;
    cout << Pembagian(6,2) << endl;
    cout << Pangkat(2,2) << endl;
    return 0;
}
