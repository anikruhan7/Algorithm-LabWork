#include <iostream>
using namespace std;

void rotateLeft(int A[], int n, int k) {
    int result[n];

    for (int i = 0; i <n; i++) {
        result[i] = A[(k+i)%n];
    }

    for (int i = 0; i < n; ++i) {
        A[i] = result[i];
    }
}

void printAraay(int a[],int n){
        for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int A[] = {10, 20, 30, 40, 50, 60};
    int n=6;
    int k = 3;
    rotateLeft(A, n, k);
    printAraay(A,n);
    return 0;
}
