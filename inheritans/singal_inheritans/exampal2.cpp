#include<iostream>

using namespace std;

class Base{
  public:
      int a;
};


class Drive:public Base{

public:

Drive (){
    cout << "Enter value of a:";
    cin >> a;
}

void printdata(){
    cout << "value of a :"<<a;
}

};


int main(){

    class Drive d1;
    d1.printdata();
    cout << d1.a;
}