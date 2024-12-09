#include <iostream>
using namespace std;

class Multi{
    int x;
    int y;

    public:
     Multi(){
         x = 0;
         x = 0;
     }
     Multi (int a , int b){
         x = a;
         y = b;
     }

     Multi operator+(Multi z){
         Multi t;
         t.x = x +z.x;
         t.y = y + z.y;
      
         return t;
     }


     void printdata(){
         cout << "value of x:" << x << endl;
         cout << "value of y:" << y << endl;

     }
};



int main (){
//    class Multi m1,m2(10,20),m3(30,40),m4(50,60),m5(70,80),m6;

//    m2.printdata();
//    m3.printdata();
//    m4.printdata();
//    m5.printdata();

//    m6 = m2 + m3 + m4+m5;
//    m6.printdata();

class Multi m1, m2, m3, m4, m5, m6;
m2 = Multi(10, 20);
m2.printdata();
m3 = Multi(30, 40);
m3.printdata();
m4 = Multi(50, 60);
m4.printdata();
m5 = Multi(70, 80);
m5.printdata();

   m6 = m2 + m3 + m4+m5;
   m6.printdata();
}