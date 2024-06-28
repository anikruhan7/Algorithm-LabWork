
#include<iostream>
using namespace std;
template<typename T>
class Stack{

private:
    int n;
    int top;
    T *s;

public:
    Stack(){
        n=5;
        top=-1;
        s=new T[n];
    }
    Stack(int n){
           this->n=n;
        top=-1;
        s=new T[n];
    }

bool isFull(){
    return top==n-1;
}


void push(T x){
    if(isFull()){
        cout<<"Full"<<endl;
        return;
    }else{
    s[++top]=x;
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

    for(int i=top;i>=0;i--) cout<<s[i]<<endl;
    cout<<"---------"<<endl;
}

int findtop(){
   return top;
 }

};


int main(){
/*
Stack a;
a.push(10);
a.push(20);
a.printStack();
*/

Stack<string>*a=new Stack<string>(100);
a->push("AIUB");
a->push("UIU");
a->push("DIU");
a->push("AUST");
a->printStack();


return 0;
}
