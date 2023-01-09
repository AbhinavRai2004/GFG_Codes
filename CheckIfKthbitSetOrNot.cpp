// CPP program to check if k-th bit 
// of a given number is set or not 
#include <iostream> 
using namespace std; 

// Method 1 (Using Left Shift).
void isKthBitSet(int n, int k) 
{ 
	if (n & (1 << (k - 1))) 
		cout << "SET"; 
	else
		cout << "NOT SET"; 
} 

// Method 2 (Using Right Shift).

void isKthBitSet(int n, int k) 
{ 
	if ((n >> (k - 1)) & 1) 
		cout << "SET"; 
	else
		cout << "NOT SET"; 
} 

// Driver code 
int main() 
{ 
	int n = 5, k = 1; 
	isKthBitSet(n, k); 
	return 0; 
} 
