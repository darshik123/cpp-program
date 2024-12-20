#include<iostream>
#include<fstream>
using namespace std;

int main (){

    char input[50];
    ofstream os;
    os.open("abc.txt");

    cout << "Enter name:";
    cin.getline(input, 100);
    os << input << endl;
    os.close();

    string line;
    ifstream is;
    is.open("abc.txt");

    while (getline(is,line))
    {
        cout << line << endl;
    }
    is.close();
}