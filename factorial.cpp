#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int res = 1;
    for (int i = 2; i <= n;i++){
        res = res * i;
    }

    return res;
}

// RECURSIVE APPROACH.

int factorialRec(int n){
    // base case.
    if(n == 0){
        return 1;
    }

    return n * factorialRec(n - 1);
}

int main()
{
    
    return 0;
}