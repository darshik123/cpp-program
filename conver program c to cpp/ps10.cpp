#include<iostream>
using namespace std;

int marks1 = 49;
int marks2 = 62;
int marks3 = 50;
float pr;
int total;

int totalmarks (){
    total = marks1 + marks2 + marks3;
    return total;
}

int per(){
    int total;
    total = totalmarks();
        pr = total/3;
        return pr;
}

int print(){
     int total = totalmarks();
     float totalpr=per();
     cout << "total marks:" << total<<endl << "total pr:" << pr;
    
}



int main(){

    print();
    return 0;
}