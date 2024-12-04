#include<iostream>
using namespace std;

class Complex{

    int x;
    int y;
public:
    Complex(){
        x = 0;
        y = 0;

    }

    Complex(int a,int b){
        x = a;
        y = b;
    }

    Complex operator+(Complex z){
        Complex t;
        t.x = x + z.x;
        t.y = y + z.y;
        return t;
    }
    void printdata(){
        cout << "Value of x:" << x << endl;
        cout << "Value of y:" << y << endl;

    }
};


int main (){
    class Complex c1,c2,c3;
    c1 = Complex(10, 20);
    c2 = Complex(30, 40);
    cout << "first object:"<<endl;
    c1.printdata();
    cout << "secondf object:"<<endl;
    c2.printdata();
    c3 = c1 + c2;
    cout << "final object:"<<endl;
    c3.printdata();

}