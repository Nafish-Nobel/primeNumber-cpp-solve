#include<iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        return 0;
    }
    
}

int main() {
    
    int n;
    cin>> n;
    if (isPrime(n))
    {
        cout << "is a prime number" << endl;

    }
    else{
        cout << "Not a prime number" <<endl;
    }
    
}
