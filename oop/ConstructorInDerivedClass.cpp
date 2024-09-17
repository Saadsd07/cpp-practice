// #include <iostream>
// using namespace std;
// class Base{
//     int b;
//     public:
    
//     Base(){
//         cout<<"this is base constructor"<<endl;
//     }
//     Base(int val){
//         b = val;
//         cout<<"this is base param constructor"<<endl;
//     }
// };



// class Derive: public Base{
//     int a;
//     public:  
// // using Base:Base;
//     Derive(){
//         cout<<"this is Derive constructor"<<endl;
//     }
//     Derive(int val):Base(0){
//         a = val;
//         cout<<"this is Derived param constructor"<<endl;
//     }
// };

// int main(){
    
//     Derive o(9);



//     return 0;
// }

// 

#include <iostream>
using namespace std;

class Base1 {
    int a;
public:
    Base1() {
        cout << "This is Base1 default constructor" << endl;
    }
    Base1(int val) {
        cout << "This is Base1 parameterized constructor" << endl;
    }
};

class Base2 {
    int b;
public:
    Base2() {
        cout << "This is Base2 default constructor" << endl;
    }
    Base2(int val) {
        cout << "This is Base2 parameterized constructor" << endl;
    }
};

class Derive : public Base1, public Base2 {
    int c;
public:
    Derive(int a, int b, int d) : Base1(a), Base2(b) {
        c = d;
        cout << "This is Derive parameterized constructor" << endl;
    }
};

int main() {
    Derive o(9, 0, 0);
    return 0;
}



/*
    1. if baseclass constructor does not have any arguments there is no need for a constructor in derived class.
    eg: class B: class A{class A first than B}

    2. if there are more than one arguments in base constructor than derived class need to pass arguments to base constructor.

    3. if both base and derived class have constructor then base clas constructor is executed first.
    eg: class B: class A, class C{class A first than C}

    4. in multiple inheritence base classes are constructed in the order in which they appear in the class declaration.
    5. in multilevel inheritence the constructors are executed in the order of inheritence.
    6. constructor of virtual base class are invoked before non virtual base class.
    7. if there are multiple virtual base constructor then they are executed in the order of declaration.
*/