#include<iostream>

using namespace std;

class Fuel{
private:
    int Flight_number;
    char Destination[20];
    float Distance;
    float Fuel;

    float CALFUEL(float Distance);
    

public:
  int FEEDINFO(){
      cout << "enter flight number:";
      cin >> Flight_number;
      cout << "Destination:";
      cin >> Destination;
      cout << "Enter Distance:";
     cin >> Distance;
  }
   int SHOWINFO(){
       cout << "flight numer is:" << Flight_number << endl;
       cout << "desatination is:" << Destination << endl;
       cout << "distance is:" <<Distance << endl;
       CALFUEL(Distance);
       cout<<"fuel are used:"<<Fuel ;
   }
};

float Fuel::CALFUEL(float Distance){
if (Distance>=0 && Distance<1000)
{
    Fuel = 500;
   
} else if(Distance>=1000 && Distance<2000){
    Fuel = 1100;
   

}  else{
     Fuel = 2200;
    

}


}

int main (){
    Fuel f1;
    f1.FEEDINFO();
    f1.SHOWINFO();
}