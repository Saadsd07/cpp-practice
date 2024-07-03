#include <iostream>
using namespace std;

class Complex{
    int a, b;

    public:
    friend Complex sumComplex(Complex obj1, Complex obj2);

    Complex(){};
    Complex(int num1, int num2){
        a=num1;
        b=num2;
    }

    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex sumComplex(Complex obj1, Complex obj2){

    Complex o3((obj1.a + obj2.a), (obj1.b + obj2.b));
    return o3;

}

int main(){

    Complex o1(4,5), o2(4,5), sum;

    o1.display();
    o2.display();

    sum = sumComplex(o1,o2);
    
    sum.display();
    

return 0;
}