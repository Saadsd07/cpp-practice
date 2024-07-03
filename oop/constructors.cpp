#include <iostream>
using namespace std;

class test{
    int a, b;

    public:

    test(){
        
    }
    test(int num1){
        a=num1;
    }

    test(int num1, int num2){
        a=num1;
        b=num2;
    }

    test(test &obj){
        a = obj.a;
        b = obj.b;
    }

    void printData(){
        cout<<"value of a = "<<a<<endl;
        cout<<"value of b = "<<b<<endl;

    }

};

int main(){
    test o1(1,2), o2(o1);
    o1.printData();
    o2.printData();
    
    

return 0;
}