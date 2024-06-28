#include<bits/stdc++.h>

using namespace std;

int **create(int r,int c){

    int **m=new int*[r];
        for(int i=0; i<r;i++){
            m[i]=new int[c];
        }

    for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            m[i][j]=rand()%10;

        }
    }

    return m;
}


void printMat(int **p,int r,int c){
      for(int i=0; i<r;i++){
        for(int j=0;j<c;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
     }
}

int **sumMatrix(int **a,int **b,int row,int column){
     int **c=new int*[row];
        for(int i=0; i<row;i++){
            c[i]=new int[column];
        }

    for(int i=0; i<row;i++){
        for(int j=0;j<column;j++){
            c[i][j]=a[i][j] + b[i][j];

        }
    }

    return c;

}


int **transpose(int **p,int row,int column){
     int **k=new int*[column];
        for(int i=0; i<column;i++){
            k[i]=new int[row];
        }

    for(int i=0; i<column;i++){
        for(int j=0;j<row;j++){
            k[i][j]=p[j][i];

        }
    }

    return k;
    }

int **multificationMat(int **a, int **b, int row1, int column1, int row2, int column2) {
    if(column1 != row2) {
        cout << "Matrix multiplication is not possible due to dimension mismatch." << endl;
        return nullptr;
    }

    int **c = new int*[row1];
    for(int i = 0; i < row1; i++) {
        c[i] = new int[column2];
    }

    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < column2; j++) {
            c[i][j] = 0; // Initialize to 0 before accumulation
            for(int k = 0; k < column1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return c;
}

  






int main(){
    srand(time(0));
    int **m1=create(4,5);
    printMat(m1,4,5);


    cout<<"------------"<<endl;


    int **m2=create(4,5);
    printMat(m2,4,5);


    cout<<"------------"<<endl;



    int **m3=sumMatrix(m1,m2,4,5);
    printMat(m3,4,5);

        cout<<"------------"<<endl;


    int **m4=transpose(m3,4,5);
    printMat(m4,5,4);

        cout<<"-----multi-------"<<endl;

 // Matrix multiplication (m1 x transpose(m2))
    int **m5 = multificationMat(m1, transpose(m2, 4, 5), 4, 5, 5, 4);
    if(m5 != nullptr) {
        cout << "Multiplication of m1 and transpose(m2):" << endl;
        printMat(m5, 4, 4);
    }

    // Free allocated memory
    for(int i = 0; i < 4; i++) {
        delete[] m1[i];
        delete[] m2[i];
        delete[] m3[i];
        delete[] m5[i];
    }
    for(int i = 0; i < 5; i++) {
        delete[] m4[i];
    }
    delete[] m1;
    delete[] m2;
    delete[] m3;
    delete[] m4;
    delete[] m5;



return 0;

}
