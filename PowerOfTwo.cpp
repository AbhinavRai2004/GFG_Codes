#include <iostream>
using namespace std;

// Method 1(Naive).

bool isPow2(int n)
{
    if(n == 0)
        return true;
    
    while(n != 1)
    {
        if(n % 2 != 0)
            return false;
        
        n = n / 2;
    }
    
    return true;
}


// Method 2(Efficient).

bool isPow2(int n)
{
    if(n == 0)
        return true;
    
    return ((n & (n - 1)) == 0);
}    


int main() {
	
	int n = 4;
	
	printf("%s", isPow2(n)? "true": "false");
}