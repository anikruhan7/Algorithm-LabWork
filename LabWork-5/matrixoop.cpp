#include<bits/stdc++.h>

using namespace std;

class Matrix{
private:
    int **m;
    int row;
    int column;

public:
    Matrix(){
        row=4;
        column=5;
         this->m=new int*[row];
        for(int i=0; i<row;i++){
            m[i]=new int[column];
        }

    for(int i=0; i<row;i++){
        for(int j=0;j<column;j++){
            m[i][j]=rand()%10;

        }
    }

    }

     Matrix(int row ,int column){
        this->row=row;
        this->column=column;

    this->m=new int*[row];
    for(int i=0; i<row;i++){
            m[i]=new int[column];
        }

    for(int i=0; i<row;i++){
        for(int j=0;j<column;j++){
            m[i][j]=rand()%10;

        }
    }

     }


    void printMat()
    { 
          for(int i=0; i<row;i++){
            for(int j=0;j<column;j++){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
         }
    }


 /* void transpose(){


    for(int i=0; i<column;i++){
        for(int j=0;j<row;j++){
            m[i][j]=m[j][i];

        }
    }
  }*/

    Matrix transpose() {
        Matrix transposed(column, row); // Create a new matrix with swapped dimensions
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < column; j++) {
                transposed.m[j][i] = m[i][j]; // Transpose the elements
            }
        }
        return transposed;
    }



   ~Matrix() {
        for(int i = 0; i < row; i++) {
            delete[] m[i];
        }
        delete[] m;
    }

};



int main(){

    Matrix *m1=new Matrix();
    m1->printMat();

    cout<<endl;

     Matrix *m2=new Matrix(10,20);
    m2->printMat();

        cout<<endl;

    Matrix *m3=new Matrix(3,4);
    m3->printMat();
    cout<<endl;

   // m3->transpose();
    //m3->printMat(3,4);

    cout << "Transposed Matrix m3:" << endl;
    Matrix m3_transposed = m3->transpose();
    m3_transposed.printMat();
    cout << endl;

    delete m1;
    delete m2;
    delete m3;

return 0;

}

