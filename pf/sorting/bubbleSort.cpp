#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n] = {50, 20, 40, 10, 30};

    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<=n; j++){
    //         if(arr[i] > arr[j]){
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            cout<<arr[j]<<" "<<arr[j+1]<<endl;
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}