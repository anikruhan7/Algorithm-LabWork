#include<iostream>
using namespace std;
#define n 5
int top=-1;
int* Stack=new int[n];


bool isFull(){
    return top==n-1;
}


void push(int x){
    if(isFull()){
        cout<<"Full"<<endl;
        return;
    }else{
    Stack[++top]=x;
    }
}

bool isEmpty(){
    return top==-1;
}


void pop(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }else{
    top--;}
}



void printStack(){

    for(int i=top;i>=0;i--) cout<<Stack[i]<<endl;
    cout<<"---------"<<endl;
}
int findtop(){
return top;
}
int main(){


push(10);
push(20);
push(30);
push(40);
push(50);
push(60);

printStack();
pop();
printStack();
cout<<findtop();

return 0;
}
