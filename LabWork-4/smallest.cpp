#include<bits/stdc++.h>
using namespace std;

int largestNum(int a[],int n){
    int sa=a[0];

    for(int i=1; i<n ; i++){
        if(a[i]<sa)
        {
            sa=a[i];
        }

    }
    return sa;
}



int main(){

    int n=5;
    int *a=new int[n];

    cout<<"Input list 0f 5 find largest num: ";

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    int smallest =largestNum(a,n);

    cout<<"Largest Number in List : "<<smallest<<endl;

    return 0;
}