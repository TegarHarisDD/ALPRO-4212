#include <iostream>

using namespace std;

void BubbleSort(int arr[],int n);
void InsertionSort(int arr[],int n);

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


    int plh;
    cout << "1. Bubble Sort" <<endl;
    cout << "2. Insertion Sort"<<endl;
    cout << "Pilih metode sort (1/2) : ";
    cin >> plh;
    while(plh!=1 && plh!=2){
        cout << "Input tidak sesuai!!!!" << endl;
        cout << "1. Bubble Sort" <<endl;
        cout << "2. Insertion Sort"<<endl;
        cout << "Pilih metode sort (1/2) : ";
        cin >> plh;
    }
    if(plh==1){
        BubbleSort(x,n);
    }else{
        InsertionSort(x,n);
    }

    return 0;
}

void BubbleSort(int arr[],int n){
    cout <<"Bubble Sort"<<endl;
    for(int i=0;i<n-1;i++){
        cout <<"============="<<endl;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        for(int k=0;k<n;k++){
                cout << arr[k];
        }
        cout <<""<<endl;
        }
    }
}
void InsertionSort(int arr[],int n){
    cout <<"Insertion Sort"<<endl;
    for (int i = 1; i < n; i++) {
        cout <<"============="<<endl;
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
        for(int k=0;k<n;k++){
            cout << arr[k];
        }
        cout <<""<<endl;
    }
}

