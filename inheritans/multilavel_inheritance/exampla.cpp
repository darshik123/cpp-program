#include<iostream>

using namespace std;

class Base1{
    protected:
    
        int a;
    public:
  void setA(){
       cout <<"Enter value of a:";
       cin >> a;
  }
};

class Base2:public Base1{
    protected:
        int b;
    public:
     void setB(){
       cout <<"Enter value of b:";
       cin >> b;
  }
};


 class Drive:public Base2{
   public:
   void product(){
       cout << "Addition of a and b:" << a + b;
   }
 };





int main(){

    class Drive d1;

    d1.setA();
    d1.setB();
    d1.product();
}
