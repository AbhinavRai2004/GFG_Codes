#include <bits/stdc++.h>
using namespace std;


// time complexity =  O(n^(1/2)).

 bool isPrime(int n)
{
	if(n==1)
		return false;

	for(int i=2; i*i<=n; i++)
	{
		if(n % i == 0)
			return false; 
	}

	return true;
}

// time complexity = O(n^(1/2)).

 bool isPrime(int n)
{
	if(n==1)
		return false;

	if(n==2 || n==3)
		return true;

	if(n%2==0 || n%3==0)
		return false;

	for(int i=5; i*i<=n; i=i+6)
	{
		if(n % i == 0 || n % (i + 2) == 0)
			return false; 
	}

	return true;
}

int main() {
    
    	int n = 65;
    	
    	printf("%s", isPrime(n) ? "true" : "false");
    	
    	return 0;
}
