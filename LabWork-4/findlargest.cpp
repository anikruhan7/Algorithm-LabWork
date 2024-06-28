#include<bits/stdc++.h>
using namespace std;

int largestNum(int a[],int n){
    int la=a[0];

    for(int i=1; i<n ; i++){
        if(a[i]>la)
        {
            la=a[i];
        }

    }
    return la;
}



int main(){

    int n=5;
    int *a=new int[n];

    cout<<"Input list 0f 5 find largest num: ";

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    int largest =largestNum(a,n);

    cout<<"Largest Number in List : "<<largest<<endl;

    return 0;
}