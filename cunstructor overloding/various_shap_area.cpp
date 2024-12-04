#include<iostream>
using namespace std;

class Area{
    public:
       

        Area()
        {
             int uservalueofcircal;
        float areaofcircal;
            cout << "Enter value of Area of circal:";
            cin >> uservalueofcircal;

            areaofcircal = 3.14 * uservalueofcircal * uservalueofcircal;
            cout << "area of circal is:" << areaofcircal<<endl;
}

 Area(int a){
     cout << "area of squer is:" << a * a<<endl;
 }
  Area(int widh, int height){
      cout << "Rectangel is:" << widh * height<<endl;
  }

  Area(double height,double base){
      cout << "Traengal is:" << (height * base )/2;
  }


};

int main(){
    class Area a1,a2(10),a3(10,20),a4(10.00,20.00);
}