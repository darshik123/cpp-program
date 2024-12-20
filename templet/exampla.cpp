#include<iostream>
using namespace std;


// template<class x ,class y>
// void display(x a, y b){
//     cout << "Enter value of a+b:" << a +b << endl;
// }

template <class t>
t display(t x,t y){
    return x + y;
}

int main(){
    // display(10,20);
   cout<< display(10,20);
}