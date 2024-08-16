#include <iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"class A";
    }
    
};
class B: virtual public A{
    // public:
    // void show(){
    //     cout<<"class B";
    // }
};
class C: virtual public A{
    // public:
    // void show(){
    //     cout<<"class C";
    // }
};
class D: public B, public C{
    public:
    // void show(){
    //       A::show();    
    //     cout<<"class D";
    // }
};

int main() {
    D obj;
    // obj.C::show(); //if show method in C.
    obj.show(); //if A is virtually inheritted by B and C

    return 0;
}

/*
          A
        /  \
      /     \
    B        c
     \      /
      \   /
        D

    d inherits two instances of A one from B and one from C. causing ambiguity of members.
    A should be derived virtually by B and C to make sure that only one instance is derived.
*/