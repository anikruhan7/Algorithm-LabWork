#include <bits/stdc++.h>
using namespace std;
int main(){
    //random number generate

     //srand(time(0));
    int n=100;
    // for(int i=0;i<n;i++){
    //     cout<<rand()%6+1<<endl;
    // }

//file writing

    // ofstream fout("prac.txt");
    //  for(int i=0;i<n;i++){
    //      fout<<rand()%60+1<<endl;
    // }
//file reading

int *a=new int[n];
ifstream read("prac.txt");

for(int i=0;i<n ;i++){
    read>>a[i];
}

 for(int i=0;i<n; i++){
        cout<<a[i]<<endl;
    }


    return 0;
}