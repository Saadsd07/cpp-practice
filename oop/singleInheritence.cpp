#include <iostream>
using namespace std;

class Employee{
    int salary;
    public:
    int id;
    Employee(){} 
    Employee(int id){
        id = id;
        salary=24;
    }
    int setSalary(int value){
        salary = value;
    }
    void showSalary(){
        cout<<"salary is "<<salary; 
    }
};

/*
1. default visibility mode is private
2. public visibility mode: public members of base class becomes public of derived
3. private visibilty mode: public members of base class becomes private of derived
4. private members of base class cannot be inherited or accessed by derived class.
4. private members of base class can be accessed by derive through getter setter functions in the base class.
*/

class Developer : public Employee{
    public:
    char devName;
    Developer(int devId){
        id = devId; 
    }
    // need a getter function to access base class member id from derived class in private vvisibility mode
    int showDevId(){
        cout<<"dev Id is "<<id<<endl;
    }
};

int main(){
    Developer dev1(1);

    dev1.showDevId();
    // cout<<dev1.id; //possible if visiblity mode is public;
    dev1.setSalary(2111); 
    dev1.showSalary(); 
    
    return 0;
}

/*
                            public mode         private mode          protected mode
    private members         not inherited       not inherited         not inherited
    protected members       protected           private               protected
    public members          public              private               protected
*/