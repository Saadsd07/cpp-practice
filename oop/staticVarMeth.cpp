#include <iostream>
using namespace std;

class Test{
    static int count;
    int a;
    public:
    void setData(){
        count = count + 1;
        a=3;
    }

    //static method use to access only static variables
    static void getData(){
        cout<<"count ="<<count<<endl;
        // cout<<"a ="<<a<<endl; cannot access nonstatic member
     
    }
};

int Test::count;

int main(){
    Test o1, o2;

    o1.setData();
    o1.getData();

    o2.setData();
    o2.getData();


return 0;
}

//static variables are used toshow the same data for all of the object in a class