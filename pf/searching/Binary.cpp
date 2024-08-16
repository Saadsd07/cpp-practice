#include <iostream>
using namespace std;

int main(){

    int n=10;
    int arr[n] = {10,20,30,40,50,60,70,80,90,100};
    int key = 10;
    int s=0;
    int e=n-1;
    int found = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(key==arr[mid]){
            found = mid;
            break;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }

    if(found!=-1){
        cout<<key<<" found at index "<<found<<endl;
    }else{
        cout<<"key not found";
    }

    return 0;
}