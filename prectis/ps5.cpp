#include<iostream>

using namespace std;


int main (){
    char str1[] = "skill";
    char str2 []= "qode";
    char str3[20];

    int lenght = 0;
    for (int i = 0; i <5; i++,lenght++)
    {
        str3[lenght] = str1[i];
    }
     for (int i = 0; i <4; i++,lenght++)
    {
        str3[lenght] = str2[i];
    }


    for (int i = 0; i < lenght; i++)
    {
        cout <<str3[i];
    }
    
    return 0;
}