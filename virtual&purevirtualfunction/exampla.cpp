#include <iostream>
using namespace std;

class Base {

    public:
    // pure virtual function
        virtual void display()=0;



        // virtual function
    //     virtual void display()
    //     {
    //         cout << "base class function call";
    // }
};

class Drived:public Base {

    public:
    void display(){
        cout << "drived class function call";
    }
};


int main (){
    Base *p;

    Drived obj;
    p = &obj;
    p->display();

}
