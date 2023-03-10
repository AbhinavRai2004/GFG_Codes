#include<iostream>
using namespace std;

// Method 1 (Simple).
/* Function to get no of set bits in binary 
representation of positive integer n */
unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n != 0) {
	    if (n % 2 != 0)
	       count++;
	    n = n/2;      
	} 
	return count; 
} 

// Method 2 (Brian and Kerningham Algorithm).
unsigned int countSetBits(int n) 
{ 
       unsigned int count = 0; 
       while (n) { 
          n &= (n - 1); 
          count++; 
       } 
      return count; 
} 

// method 4.
int countSetbit(int n){
    int count = 0;
     while(n>0){
        if(n & 1 == 1){
        count++;
        }
        n= n>>1;
     }
     return count;
}

/* Program to test function countSetBits */

int main() 
{ 
	int i = 9; 
	cout << countSetBits(i); 
	return 0; 
} 


// Method 3 (Lookup Table).

    int table[256];
	
	// recursive function to count set bits 
	void initialize() { 

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}

/* Program to test function countSetBits */
int main() 
{ 
	    initialize();
		int n = 9; 
	cout << countSetBits(n); 
	return 0; 
} 
