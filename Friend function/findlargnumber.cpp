#include <iostream>
using namespace std;

class Larg{

    int x;
    int y;
    int z;

    friend Larg finde(Larg);
public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
     }
     
     int printdata(){
        if(x>y&&x>z){
            cout << "x is larg";
        } else if(y>x&&y>z){
            cout << "y is larg";
        } else{
            cout << "z is larg";
        }
     }
};

// Larg finde (Larg a,Larg b){
//     Larg t;
//     t.x = a.x + b.x;
//     t.y = a.y + b.y;
//     t.z = a.z + b.z;

//     return t;
// }

Larg finde (Larg a){
    a.printdata();

    return a;
}



int main (){

    class Larg l1,l2;
    l1.getdata(100, 20, 30);
    

    l2 = finde(l1);

    // class Larg l1,l2,l3;
    // l1.getdata(10, 20, 50);
    // l2.getdata(20, 40, 60);
    // l3 = finde(l1, l2);
    // l3.printdata();
}
