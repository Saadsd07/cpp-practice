#include <iostream>
using namespace std;

int main(){
    int arr[5]= {5,2,1,3,4};
    int flag=0;
    int n;
    cout<<"enter the number for search "<<endl;
    cin>>n;

    for(int i=0; i<=4; i++){
        if(arr[i] == n){
            cout<<n<<" exist at "<<arr[i]<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<n<<" does not exist in the array"<<endl;
    }



    return 0;
}