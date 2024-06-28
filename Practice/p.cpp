#include <iostream>
using namespace std;

void leftshift(int A[], int n,int k) {
    for(int i=0;i<k;i++){
    for (int i = 0; i < n-1; i++) {
        A[i]=A[i+1];
    }
}
  for (int i = n - k; i < n; ++i) {
        A[i] = 0;
    }


}

 void printAraay(int a[],int n){
        for (int i = 0; i < n; i++) {

        cout << a[i] << " ";
    }
    cout<<endl;
}
int main() {
    int A[] = {10, 20, 30, 40, 50, 60};
    int n=6;
    int k=2;
    printAraay(A,n);
    leftshift(A,n,k);
    printAraay(A,n);

    return 0;
}
