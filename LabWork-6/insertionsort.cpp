#include <bits/stdc++.h>
using namespace std;

int *insertionsort(int *p, int n) {
            int value;
            int i;

    for(int j=1;j<n-1;j++){
        value=p[j];
    i=j-1;
    while(i>=0 && p[i]>value){
        swap(p[i],p[i+1]);
        i=i-1;
    }
    p[i+1]=value;
    }




    return p;
}

 void printList(int *a,int n){

    for (int i = 0; i < n; i++) {

            cout<<a[i]<<endl;

    }

    cout<<endl;

}


int main() {

    int n = 100000;
    int *a = new int[n];

    ifstream fin("100k-sorted.txt");

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    int *s = insertionsort(a, n);

    //printList(a,n);

   // cout<<"----------after sort-----"<<endl;

    //printList(s,n);

    ofstream fout("100k-inssorted2.txt");

    for(int i = 0; i < n; i++){
        fout<<s[i]<<endl;
    }

    return 0;
}

