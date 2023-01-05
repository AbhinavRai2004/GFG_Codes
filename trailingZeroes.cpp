#include <bits/stdc++.h>
using namespace std;

// NAIVE APPROACH.

int trailingZeroes(int n){
    int fact = 1;
    for (int i = 2; i <= n;i++){
        fact = fact * i;
    }

    int res = 0;

    while(fact > 0){
        if((fact%10) == 0){
            res++;
            fact = fact / 10;
        }  
    }
    return res;
}

// EFFICIENT APPROACH.

int trailingZeroes(int n){
    int res = 0;

    for (int i = 5; i <= n;i = i*5){
        res = res + n / i;
    }
    return res;
}

int main()
{
    
    return 0;
}