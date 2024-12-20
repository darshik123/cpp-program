#include<iostream>
#include<fstream>

using namespace std;

int main(){

    char input[50];

    ofstream os;
    os.open("xyz.txt");
    cout << "Enter Your name:";
    cin.getline(input, 100);
    os << input << endl;

    cout << "Enter Contact Number:";
    cin.get(input, 100);
    cin.ignore();
    os << input << endl;

    os.close();

    ifstream is;

    string line;
    is.open("xyz.txt");
 // reding file
    while (getline(is,line))
    {
        cout << line<<endl;
    }

    is.close();
}
