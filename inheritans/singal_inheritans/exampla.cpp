#include<iostream>
using namespace std;

class Base{

    int a = 10;

    public:
        int b = 20;

        protected:
            int c = 30;
};


class Drive:private Base{

public:
void printData(){
    cout << b << endl;
    cout << c;
}

};


int main (){
    Drive d1;

    d1.printData();
}