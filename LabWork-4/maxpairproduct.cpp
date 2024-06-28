#include<bits/stdc++.h>
using namespace std;

long pairProduct(int a[],int n){

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
    return la * secla;
}



int main(){

    int n=5;
    int *a=new int[n];
  
    cout<<"Input list 0f 5 num : ";

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    long MaxpairProduct =pairProduct(a,n);

    cout<<"Maximum Pairwise Product is : "<<MaxpairProduct<<endl;

    return 0;
}