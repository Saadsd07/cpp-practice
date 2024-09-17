#include <iostream>
using namespace std;

int main(){
    
    int arr[7] = {2,4,2,5,3,2,6};
    int target = 4;
    bool flag = false;

    for(int i=0; i<6; i++){
        for(int j=i+1; j<7; j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[i] + arr[j] == target){
                cout<<"The sum of number at index "<<i<<" and "<<j<<" is equal to the target"<<endl;
                flag = true;
                break;
            }
            if(flag == true){
                break;
            }
            
        }
        if(flag == true){
                break;
            }
    }

    return 0;
}

/*
i  j   
2  4
2  2
2  5
2  3
2  2
2  6
*/