#include<iostream>
using namespace std;

int main(){
srand(time(0));
int n;
for(int i=0;i<100;i++)
{    
    cout<<rand()%6+1<<endl;
}

return 0;
}
