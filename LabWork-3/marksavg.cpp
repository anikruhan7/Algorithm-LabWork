
#include <bits/stdc++.h>

using namespace std;

double avrgMark(int *p,int n){

    int total=0;

    for(int i=0; i<n; i++){
        total+=p[i];
    }

    return (double)total/n;

}


int* bonusMarks(int *p,int n,int a){

    //ofstream fout("Bonus.txt");
    int *b=new int[n];

    for(int i=0; i<n; i++){
            if(p[i]+a>100){
                b[i]=p[i];
            }else{
        b[i]=p[i]+a;
            }
    }
    return b;
}


void printList(int *p,int n){
    for(int i=0;i<n; i++){

        cout<<p[i]<<endl;
    }
}

int main(){
    int n=40;
    int *a=new int[n];

    ifstream fin("marks.txt");

    for(int i=0; i<n; i++){
        fin>>a[i];
    }

   // printList(a,n);
    double av=avrgMark(a,n);
    cout<<"Average "<<av<<endl;

    //cout <<endl<<"AfterBonus "<<endl;
    int *m=bonusMarks(a,n,5);

    printList(m,n);


    return 0;
    }
