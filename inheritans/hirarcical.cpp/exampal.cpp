#include<iostream>

using namespace std;

class Base{
    protected:
        int a;
        public:
        void stA(){
            cout << "Enter valure of a:";
            cin >> a;
        }
};

class Drive1:public Base{
protected:
    int b;
    public:
    void setB(){
          cout << "Enter valure of b:";
            cin >> b;
    }
    void sum(){
        cout << "sum of a+b=" << a + b<<endl;
    }
};

class Drive2:public Base{
protected:
    int c;
    public:
    void setC(){
          cout << "Enter valure of c:";
            cin >> c;
    }
    void mul(){
        cout << "multi of a*b=" << a * c;
    }
};

int main (){

    Drive1 obj1;
    obj1.stA();
    obj1.setB();
    obj1.sum();

    Drive2 obj2;

    obj2.stA();
    obj2.setC();
    obj2.mul();
}