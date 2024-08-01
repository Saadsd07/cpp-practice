#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[5] = {50, 0,  10, 0, 40};
    int f_large = INT_MIN;
    int s_large=INT_MIN;

    for(int i=0; i<5; i++){
        if(arr[i]  > f_large){
            s_large = f_large;
            f_large = arr[i];
        }

        if(arr[i] > s_large && arr[i]<f_large){
            s_large = arr[i];
        }
    }
    
    cout<<s_large;

    return 0;
}