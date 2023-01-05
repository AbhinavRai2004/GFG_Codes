#include <bits/stdc++.h>
using namespace std;

// NAIVE SOLUTION.

void printAllDivisor(int n){
    for (int i = 1; i <= n;i ++){
        if(n % i == 0)
            cout << i << " ";
    }
}

// EFFICIENT SOLUTION 1.

void printAllDivisor(int n){
    for (int i = 1; i * i <= n;i ++){
        if(n % i == 0){
            cout << i << " ";
        }
        
        if(i != (n/i))
            cout << n / i << " ";
    }
}

// EFFICIENT APPROACH 2.

void printAllDivisor(int n){
    for (int i = 1; i * i <= n;i ++){
        if(n % i == 0)
            cout << i << " ";
    }

    for (int i = sqrt(n); i >= 1;i --){
        if(n % i == 0)
            cout << n / i << " ";
    }
}

int main()
{
    
    return 0;
}