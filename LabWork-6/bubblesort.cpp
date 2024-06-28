#include <bits/stdc++.h>
using namespace std;

int *bubblesort(int *p, int n) {


    for (int k = 0; k < n-1; k++) {

        for (int i =0; i < n-k-1; i++) {

        if (p[i] > p[i + 1]) {
                swap(p[i], p[i + 1]);
            }
    }

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

    ifstream fin("100k.txt");

    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }

    int *s = bubblesort(a, n);

    //printList(a,n);

   // cout<<"----------after sort-----"<<endl;

    //printList(s,n);

    ofstream fout("100k-sorted.txt");

    for(int i = 0; i < n; i++){
        fout<<s[i]<<endl;
    }

    return 0;
}

