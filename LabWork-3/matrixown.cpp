#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"enter r and c :";
    cin>>r>>c;

    int **m=new int*[r];
    for(int i=0; i<r;i++){
        m[i]=new int[c];
    }

    srand(time(0));
    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            m[i][j]=rand()%99+1;
        }
    }

     for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}