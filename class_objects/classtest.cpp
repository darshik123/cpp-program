#include<iostream>
using namespace std;

class Test{
private:
    int testCode;
    char description[20];
    int nocandidate;                                     
    int centerReqd;
    int calcntr(int nocandidate );

public:
   int SCHEDULE(){
       cout << "enter testcode:";
       cin >> testCode;
       cout << "description:";
       cin >> description;
       cout << "nocandidate:";
       cin >> nocandidate;
       cout << "centerReqd:";
       cin >> centerReqd;
   }

   int DISPTEST(){
       cout << "testcode:" << testCode<<endl;
       cout << "description:" << description<<endl;
       cout << "centerReqd:" << centerReqd<<endl;
       cout<<"display data:"<< calcntr(nocandidate);

   }
};
int Test::calcntr(int nocandidate ){
    return nocandidate / 100 + 1;
}

int main (){
    Test t1;
    t1.SCHEDULE();
    t1.DISPTEST();
}