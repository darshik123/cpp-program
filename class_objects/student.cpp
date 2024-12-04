#include <iostream>

using namespace std;

class Student{

private:
    int admun;
    char sname[20];
    float eng, math, science;
    float total = 0;
    float ctotal(float eng, float math, float science);

public:
 void takData(){
     cout << "Adnumber:";
     cin >> admun;
     cout << "sname:";
     cin >> sname;
     cout << "eng:";
     cin >> eng;
     cout << "math:";
     cin >> math;
     cout << "science:";
     cin >> science;
     
 }
 void showData(){
     cout << "Adnumber:"<<admun<<endl;
     cout << "sname:"<<sname<<endl;
     cout << "eng:"<<eng<<endl;
     cout << "math:"<<math<<endl;
     cout << "science:"<<science<<endl;
     cout <<"total:"<<ctotal(eng,math,science);
 }
};

float Student::ctotal(float eng, float math, float science){
    return eng + math + science;
}

 int main (){
     Student s1;
     s1.takData();
     s1.showData();
 }