#include<iostream>
using namespace std;

class Base{

    int a=10 ;
    static int count ;

public:
    Base(){
        a++;
        count++;
    }

    void printData(){
        cout << "Value of a:" << a << endl;

    }
  static  void print(){
        cout << "Value of count:" << count << endl;

    }
};

int Base::count = 0;

int main(){
    class Base x;
    x.printData();
    x.print();
    Base y;
    y.printData();
    y.print();
    Base z;
    z.printData();
    z.print();
}