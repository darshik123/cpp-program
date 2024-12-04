#include<iostream>

using namespace std;

class Fuel{
    int flightno;
    char destination[20];
    float distans;
    float fuel;
    void  calfuel(float distance);

    public:
    Fuel (){
        cout << "Enter flight no:";
        cin>>flightno;
        cout << "Enter destination:";
        cin >> destination;
        cout << "Enter distents:";
        cin >> distans;
    }

    void showinfo(){
        cout << "flight no is:" << flightno << endl;
        cout << "destination:" << destination << endl;
        cout << "distans:" << distans << endl;
        calfuel(distans);
        cout << "fuel are used:" << fuel << endl;
    }
    ~Fuel(){
        cout << "destructor is called";
    }
};

void  Fuel::calfuel(float distance){
     if (distance>0&&distance<1000)
     {
         fuel = 500;
     }else if(distance>=1000&&distance<2000){
         fuel = 1100;
     }else{
         fuel = 2200;
     }
     
}


int main(){

    Fuel f1;
    f1.showinfo();
}