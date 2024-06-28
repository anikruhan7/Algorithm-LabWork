
#include<iostream>
using namespace std;

class Matrix{

private:
    int row;
    int col;
    int **m;
public:
    Matrix(){
        row=3;
        col=4;
        m =new int*[row];
    for(int i=0;i<row;i++){
    m[i]=new int[col];
}
    }

    Matrix(int row,int col){

    this->row=row;
    this->col=col;
    m =new int*[row];
    for(int i=0;i<row;i++){
    m[i]=new int[col];

    }}

void printMatrix(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------"<<endl;
}






};

int main(){
    /*
Matrix a;

int **m1=a.createMatrix(3,3);
a.printMatrix(m1,3,3);
*/

Matrix *n=new Matrix(3,4);
n->printMatrix();


return 0;
}
