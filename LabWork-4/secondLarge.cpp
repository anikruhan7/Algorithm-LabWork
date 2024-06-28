#include<bits/stdc++.h>
using namespace std;

int largestNum(int a[],int n){

    int la=INT_MIN;
    int secla;

    for(int i=0; i<n ; i++){
        if(a[i]>la)
        {
            secla=la;
            la=a[i];

        }else if(a[i]>secla && a[i] !=la)
        {
            secla=a[i];

        }

    }
    return secla;
}



int main(){

    int n=5;
    int *a=new int[n];
  
    cout<<"Input list 0f 5 num to find 2nd largest num: ";

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    int seclargest =largestNum(a,n);

    cout<<"2nd Largest Number in List : "<<seclargest<<endl;

    return 0;
}