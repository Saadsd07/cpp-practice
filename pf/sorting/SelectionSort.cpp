#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n] = {50, 20, 40, 10, 30};


    for(int i=0; i<n; i++){
        int minIdx = i;
            cout<<"mI"<<" i"<<" "<<" j"<<endl;
        for(int j=i+1; j<n; j++){
            cout<<arr[minIdx]<<" "<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}