#include<iostream>
using namespace std;

class Book{
private:
    int booskno;
    char bookstitle[20];
    float price;
int total_cost(int n);


public:
int input(){

    cout << "Enter book number:";
    cin>>booskno;
    cout << "Entyer book title:";
    cin >> bookstitle;
    cout << "Entewr price:";
    cin >> price;
}
int purchase(){
    int n;
    cout << "how much purchase book:";
    cin >> n;
    cout << "total cost:" << total_cost(n);
}
};

int Book:: total_cost(int n){
    price = n * price;
    return price;
}

int main(){

    Book b1;
    b1.input();
    b1.purchase();
}