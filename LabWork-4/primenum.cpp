#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    bool Flag = true;

    if(n==1)
    {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) 
        {
            Flag = false;
            break;
        }

    }

    return Flag;

}


int main() {

    int a;
    cout << "Enter a number: ";
    cin >> a;

  if (isPrime(a)) {
        cout << a << " is prime number." << endl;
    } else {
        cout << a<< " is not prime number." << endl;
    }

    return 0;
}
