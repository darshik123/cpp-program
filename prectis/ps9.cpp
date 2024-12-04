#include <iostream>
using namespace std;
struct bill
{
    int cus[5];
    int rate;
    int qut;
    int amt;
    int dic;
    int totalamt;
    int gst;
    int netbill;
};


int main (){
    struct bill s1[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter custumer:";
        // cin>>s1[i].cus;
        // scanf("%d", &s1[i].cus);

        cout<<"Enter ret:";
        cin>>s1[i].rate;

        cout<<("Enter quntity:");
        cin>>s1[i].qut;


        s1[i].amt = s1[i].rate * s1[i].qut;
        s1[i].dic = s1[i].amt * 5 / 100;
        s1[i].totalamt = s1[i].amt - s1[i].dic;
        s1[i].gst = s1[i].totalamt * 28 /100;
        s1[i].netbill = s1[i].totalamt + s1[i].gst;



       cout<<"amount:"<<s1[i].amt<<endl;
       cout<<"dicunt:"<<s1[i].dic<<endl;
       cout<<"totalamount:"<<s1[i].totalamt<<endl;
       cout<<"GST:"<<s1[i].gst<<endl;
       cout<<"netbill:"<<s1[i].netbill<<endl;
    }
    
      


    return 0;
}