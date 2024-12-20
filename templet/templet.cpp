#include<iostream>
using namespace std;
 
// template<class t>

//   void display(t a){
//       cout << "Value of a:" << a << endl;
//   }


// template<class t,class h>

//   void display(t a, h b){
//       cout << "Value of a:" << a <<"\t"<<b<< endl;
//   }

template<class t>

  t display(t a,t b){
    //   cout << "Value of a:" << a << endl;
      cout << "Value of a:" << a <<"\t"<<b<< endl;

  }





int  main(){
    display("b","a");
    // display('a', 20.25);
}