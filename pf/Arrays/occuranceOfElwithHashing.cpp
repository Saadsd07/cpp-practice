//find the number of times an element appears in the array with hashing. eg: [1,2,1,3,12] 1 appeared 2 times

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter array size "<<endl; 
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    
    int hash[13] = {0};
    
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    
   
  int q;
    cout<<"How many numbers do you want to find in the array? "; 
    cin>>q;
  while(q--){
      int number;
      cout<<"Enter the number ";
      cin>>number;
      cout<<number<<" has appeared "<<hash[number]<<" times in the array."<<endl;
      
       
  }

    return 0;
}