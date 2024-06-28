#include<bits/stdc++.h>

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main(){

    int a=7;
    int b=4;

    cout<<"Before swap"<<endl;
    cout<<"a= "<<a<<" "<<"b= "<<b<<endl;

    swap(a, b);

    cout<<"after swap"<<endl;
    cout<<"a= "<<a<<" " <<"b= "<<b<<endl;


    return 0;
}