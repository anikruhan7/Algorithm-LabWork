#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int n, int s){

    for(int i=0; i<n ; i++){
        if(a[i]==s)
        {
           return i;
        }
    }
     return -1;
}



int main(){

    int n=5;
    int *a=new int[n];

    cout<<"Input list 0f 5 number: ";

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    int num;
    cout<<"enter a number to search: ";
    cin>>num;

    int index=LinearSearch(a,n,num);

    if(index>-1)
    {
        cout<<"Number is found in index "<<index<<endl;
    }else
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}