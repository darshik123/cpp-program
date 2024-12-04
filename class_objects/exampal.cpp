#include<iostream>
using namespace std;

class Student
{
    protected:
        int c = 30;

    private:
        int b = 20;

    public:
        int a = 10;
        void ShowData(){
            cout <<"\t"<<b<<"||"<< c;
        }
};

int main (){
    Student s1;
    cout << s1.a;
    s1.ShowData();
}


