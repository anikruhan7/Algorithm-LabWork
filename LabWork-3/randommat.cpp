
#include <bits/stdc++.h>

using namespace std;

void printMatrix(int **p,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------"<<endl;
}

int main(){

int row;
int column;
cout<<"Enter the row and column:"<<endl;
cin>>row>>column;

int **m =new int*[row];
for(int i=0;i<row;i++){
    m[i]=new int[column];
}
srand(time(0));

for(int i=0;i<row;i++){
    for (int j=0;j<column;j++){
       m[i][j]=rand();
    }
}

printMatrix(m,row,column);

return 0;
}
