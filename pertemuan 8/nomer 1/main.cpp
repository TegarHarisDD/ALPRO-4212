#include <iostream>

using namespace std;

void MinEven(int arr[],int n);
int isGanjil(int x);

int main()
{
    int n;
    cout << "masukan panjang array : ";
    cin >> n;

    int x[n];
    for(int i=0; i<n; i++){
        cout << "masukan nilai array indeks ke-" << i << " :";
        cin >> x[i];
    }

    MinEven(x,n);

    return 0;
}
int isGanjil(int x){
    return (x%2==1);
}
void MinEven(int arr[],int n){
    int temp = arr[0];
    int index=-1;
    for(int i=0;i<n;i++){
        if(!isGanjil(arr[i]) && arr[i]<temp){
            temp=arr[i];
            index=i;
        }
    }
    if(index==-1){
    cout << "bilangan tidak ditemukan" << endl;
    }else{
    cout << temp <<" adalah bilangan genap terkecil di index ke-" << index << endl;
    }
}


