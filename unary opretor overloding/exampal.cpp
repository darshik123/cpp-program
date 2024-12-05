#include <iostream>
using namespace std;

class Complex {
    int x;
    int y;

    public:

    void getdata(int a ,int b){
        x = a;
        y = b;
    
    }


    void printdata(){
        cout << "valu of x:" << x << endl;
        cout << "valu of y:" << y << endl;

    }

    void operator-(){
        x = -x;
        y = -y;
    }
};


int main (){
    class Complex c1;
    c1.getdata(-5, -6);
    c1.printdata();

    -c1;
    c1.printdata();
}