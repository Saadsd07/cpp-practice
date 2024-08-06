#include <iostream>
using namespace std;

int main(){
    int num = 202;
    int reverse = 0;
    int realNum = num;
    
    while(num>0){
        int lastDigit = num % 10;
        reverse = reverse*10 + lastDigit;
        num = num / 10;
    }

    if(realNum == reverse){
    cout<<realNum<<" is equal to "<<reverse<<" so it is an armstrong number";

    }else{
        cout<<realNum<<" is not equal to "<<reverse<<" so it is not an armstrong number";
    }

    return 0;
}