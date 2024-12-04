#include<iostream>
using namespace std;
int forloop(int n){
   
   
    for (int i =5; i >=1;i--) {
       for (int j = 5; j >=i; j--)
       {
           cout << n;
         n += 1;
       }
       cout << endl;
      
        
}
}
int main (){
    forloop(1);
    return 0;
}