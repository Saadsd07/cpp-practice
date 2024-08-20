#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int insertionSort(int arr[], int n){


    for(int i=0; i<n; i++){
        int temp = arr[i];
        int j= i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        

    }

    printArr(arr, n);



};


int main(){
    // int n=5;
    // int arr[n] = {3,5,2,12,1};

    // for(int i=0; i<n; i++){
    //     int temp = arr[i];
    //     int j = i-1;
    //     while(j>=0 && arr[j]>temp){
    //         arr[j+1] = arr[j];
    //         j--;
    //     }
    //     arr[j+1] = temp;
    // }

    // printArr(arr, n);
    int arr[] = {3,5,2,12,1};
    int n= sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);



    return 0;
}