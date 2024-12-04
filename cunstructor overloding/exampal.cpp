#include<iostream>
using namespace std;

class Hello{
    public:
    Hello(){
        cout << "Defualt cunstructor is called"<<endl;
    } 

    Hello(int a){
                cout << "value of a:"<<a<<endl;

    }
    Hello(int a,int b){
        cout << "sum of a+b=" << a + b;
    }
    Hello (float a,float b){
        cout << "sum of a+b=" << a + b;
         
    }

};


int main (){
    class Hello h1,h2(10),h3(10,20),h4(10,20.00);               
}