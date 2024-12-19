#include<iostream>

using namespace std;
class Base{
    public:
virtual void display(){
    cout << "Base class function call";
}

};
class Drived :public Base{
public:

void display(){

    cout << "Drived calss function call";
}

};

int main (){
    Base *p;

    Drived obj;
    p = &obj;

    p-> display();
}