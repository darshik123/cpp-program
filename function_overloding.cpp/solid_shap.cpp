#include<iostream>
using namespace std;


class Shape{

     public:

     void solid (int a){
         cout << "Cube:" << a * a * a<<endl;
     }

     void solid(int a,int b){
         cout << "Cone:" << (1 / 3) * 3.14 * a * a  * b;
     }

};

int main (){
    class Shape s1;
    s1.solid(10);
    s1.solid(50, 5);
}