#include<iostream>
using namespace std;

class Batsman{
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg = 0;

    float calcavg(int run,int innings,int notout);

public:
int readdata(){
    cout << "bcode:";
    cin>>bcode;
    cout << "bname:";
    cin >> bname;
    cout << "innings:";
    cin>> innings;
    cout << "notout:";
    cin >> notout;
    cout << "run:";
    cin >> runs;
}
  int displaydata(){
    cout<<"Bcode:" << bcode<<endl;
    cout<<"Bname:"<< bname<<endl;
    cout<<"innings:" << innings<<endl;
    cout<<"notout:" << notout<<endl;
    cout<<"runs:"<<runs<<endl;
    cout << calcavg(runs,innings,notout);
  }
};

float Batsman::calcavg(int runs,int innings,int notout){
    batavg = runs / (innings - notout);
    return batavg;
}

int main (){
    Batsman b1;
    b1.readdata();
    b1.displaydata();
}