#include <iostream>

using namespace std;

//1. Deklarasi fungsi Max
int Max(int a,int b);
//2. Deklarasi fungsi Min
int Min(int a,int b);
//3. Deklarasi fungsi MaxArray
int MaxArr(int arr[]);
//4. Deklarasi fungsi Min Array
int MinArr(int arr[]);
//5. Deklarasi fungsi isEven
bool isEven(int x);
//6. Deklarasi fungsi isOdd
bool isOdd(int x);
//7. Deklarasi fungsi isFactor
bool isFactor(int a,int b);
//8. Deklarasi fungsi Search
int Search(int x, int arr[]);
//9. Deklarasi fungsi isFound
bool isFound(int x,int arr[]);
//10. Deklarasi fungsi sumEven
int sumEven(int arr[]);
//11. Deklarasi fungsi sumOdd
int sumOdd(int arr[]);

int main()
{
    int x[7]={11,2,4,2,7,12,3};//array ini untuk semua fungsi yang membutuhkan array
    int a,b;// input untuk parameter fungsi

    cout << "Array x[7]=]={11,2,4,2,7,12,3}" << endl;

    cout <<"=================================" << endl;
    cout << "1. Memanggil fungsi Max" << endl;
    cout << "Masukan bilangan 1 : ";
    cin >> a;
    cout << "Masukan bilangan 2 : ";
    cin >> b;
    cout << "Bilangan terbesar adalah : " << Max(a,b) << endl;

    cout <<"=================================" << endl;
    cout << "2. Memanggil fungsi Min" << endl;
    cout << "Masukan bilangan 1 : ";
    cin >> a;
    cout << "Masukan bilangan 2 : ";
    cin >> b;
    cout << "Bilangan terkecil adalah : " << Min(a,b) << endl;

    cout <<"=================================" << endl;
    cout << "3. Memanggil fungsi MaxArr" << endl;
    cout << "Nilai terbesar dalam array x adalah : " << MaxArr(x) << endl;

    cout <<"=================================" << endl;
    cout << "4. Memanggil fungsi MinArr" << endl;
    cout << "Nilai terbesar dalam array x adalah : " << MinArr(x) << endl;

    cout <<"=================================" << endl;
    cout << "5. Memanggil fungsi isEven" << endl;
    cout << "Masukan angka : ";
    cin >> a;
    if(isEven(a)==true){
        cout << a << " adalah bilangan genap"<< endl;
    }else{
        cout << a << " bukan bilangan genap"<< endl;
    }

    cout <<"=================================" << endl;
    cout << "6. Memanggil fungsi isOdd" << endl;
    cout << "Masukan angka : ";
    cin >> a;
    if(isOdd(a)==true){
        cout << a << " adalah bilangan ganjil"<< endl;
    }else{
        cout << a << " bukan bilangan ganjil"<< endl;
    }

    cout <<"=================================" << endl;
    cout << "7. Memanggil fungsi isFactor"<< endl;
    cout << "Masukan angka : ";
    cin >> a;
    cout << "Masukan faktornya : ";
    cin >> b;
    if(isFactor(a,b)==true){
        cout << b << " adalah faktor dari " << a << endl;
    }else{
        cout << b << " bukan faktor dari " << a << endl;
    }

    cout <<"=================================" << endl;
    cout << "8. Memanggil fungsi Search" << endl;
    cout << "Masukan angka yang akan dicari di array x : ";
    cin >> a;
    if(Search(a,x)==0){
        cout << a << " tidak ada dalam array x" << endl;
    }else{
        cout << a << " ada dalam array x" << endl;
    }

    cout <<"=================================" << endl;
    cout << "9. Memanggil fungsi isFound" << endl;
    cout << "Masukan angka yang akan dicari di array x : ";
    cin >> a;
    if(isFound(a,x)==true){
        cout << "angka ditemukan pada array x" << endl;
    }else{
        cout << "angka tidak ditemukan pada array x" << endl;
    }

    cout <<"=================================" << endl;
    cout << "10. Memanggil fungsi sumEven" << endl;
    cout << "Jumlah total bilangan genap pada array x adalah = " << sumEven(x) << endl;

    cout <<"=================================" << endl;
    cout << "11. Memanggil fungsi sumOdd" << endl;
    cout << "Jumlah total bilangan ganjil pada array x adalah = " <<  sumOdd(x) << endl;
    return 0;
}
//1. Deskripsi fungsi Max
int Max(int a,int b){
    int temp=0;
    if(a>b){
        temp=a;
    }else{
        temp=b;
    }
return temp;
}
//2. Deskripsi fungsi Min
int Min(int a,int b){
    int temp=0;
    if(a<b){
        temp=a;
    }else{
        temp=b;
    }
return temp;
}
//3. Deskripsi fungsi Max array
int MaxArr(int arr[]){
    int temp=arr[0];
    for(int i=0;i<7;i++){
        temp = Max(temp,arr[i]);
    }
return temp;
}
//4. Deskripsi fungsi Min array
int MinArr(int arr[]){
    int temp=arr[0];
    for(int i=0;i<7;i++){
        temp = Min(temp,arr[i]);
    }
return temp;
}
//5. Deskripsi fungsi isEven
bool isEven(int x){
    if(x%2==0){
        return true;
    }else{
        return false;
    }
}
//6. Deskripsi fungsi isOdd
bool isOdd(int x){
    if(x%2==1){
        return true;
    }else{
        return false;
    }
}
//7. Deskripsi fungsi isFactor
bool isFactor(int a,int b){
    if(a%b==0){
        return true;
    }else{
        return false;
    }
}
//8. Deskripsi fungsi Search
int Search(int x, int arr[]){
    int temp=0;
    for(int i=0;i<7;i++){
        if(x==arr[i]){
            temp=arr[i];
        }
    }
return temp;
}
//9. Deskripsi fungsi isFound
bool isFound(int x,int arr[]){
    for(int i=0;i<7;i++){
        if(x==arr[i]){
            return true;
        }
    }
return false;
}
//10. Deskripsi fungsi sumEven
int sumEven(int arr[]){
    int sum=0;
    for(int i=0;i<7;i++){
        if(arr[i]%2==0){
            sum += arr[i];
        }
    }
return sum;
}
//11. Deklarasi fungsi sumOdd
int sumOdd(int arr[]){
    int sum=0;
    for(int i=0;i<7;i++){
        if(arr[i]%2==1){
            sum += arr[i];
        }
    }
return sum;
}
