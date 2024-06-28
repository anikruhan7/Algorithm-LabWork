#include<iostream>
using namespace std;

int *addBegining(int *a,int n,int num){
    int *b=new int[n+1];
    b[0]=num;

    for(int i=0;i<n;i++){
       b[i+1]=a[i];
    }
    return b;


}
int searchindex(int *a,int n,int num){
for(int i=0;i<n;i++){
    if(num==a[i]){
        return i;
    }}
    return -1;

}

int *deleteIndex(int *a,int n,int index){
    int *b=new int[n-1];

    for(int i=0;i<n;i++){
          b[i]=a[i];
          for(int i=index;i<n-1;i++){
            b[i]=a[i+1];
          }
    }
    return b;
}


int *mergeArray(int *a,int *b,int m,int n){

    int *f=new int[m+n];


    for(int i=0;i<m+n;i++){
 for(int i=0;i<m;i++){
        f[i]=a[i];
    }
    for(int i=0;i<n;i++){
        f[i+m]=b[i];
    }
    }



return f;

}


 void printList(int *a,int n){
    for(int i=0;i<n;i++){
   cout<<a[i] <<" ";
}
cout<<endl;
}

int main(){
   int a[5]={10,20,30,40,50};

  printList(a,5);
  int *p=addBegining(a,5,100);
  printList(p,6);
  //int index=searchindex(p,6,30);
  //cout<<index<<endl;

  //int *l=deleteIndex(p,6,index);
  //printList(l,5);

  int *f=mergeArray( a,p,5,6);
  printList(f,11);



return 0;
}
