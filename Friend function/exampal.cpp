#include<iostream>

using namespace std;

class Box{
    int l;
    int m;
    int n;
    friend Box add(Box,Box);

public:

    void setdata(int a,int b,int c){
        l = a;
        m = b;
        n = c;
    }

    int getvolume(){
        return l * m * n;
    }
};

Box add(Box y,Box z){
    Box t;
    
    t.l = y.l + z.l;
    t.m = y.m + z.m;
    t.n = y.n + z.n;

    return t;
}


int main (){
    class Box b1,b2,b3;
    b1.setdata(2, 2, 2);
    b2.setdata(5, 5, 5);

    cout << "volume of s1:" << b1.getvolume() << endl;
    cout << "volume of s2:" << b2.getvolume() << endl;
    b3 = add(b1, b2);
    cout << "volume of s2:" << b3.getvolume() << endl;

}