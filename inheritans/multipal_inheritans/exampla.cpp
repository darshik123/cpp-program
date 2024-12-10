#include<iostream>

using namespace std;

class A{
    protected:
        int a;
    public:
  void geta(int x){
      a = x;
  }
};

class B{
    protected:
        int b;
    public:
     void getb(int x){
      b = x;
  }
};


class C: public A,public B{
  public:

  void displaydat(){
      cout << "value of a:" << a << endl;
      cout << "value of b:" << b << endl;
      cout << "value of a+b:" << a + b << endl;
  }

};



int main(){

    class C c1;

    c1.geta(10);
    c1.getb(20);
    c1.displaydat();
}
