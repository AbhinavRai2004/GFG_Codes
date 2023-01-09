#include <iostream>
using namespace std;

// Naive Code.

int findOdd(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count % 2 != 0)
            return arr[i];
        
    }
}

// Efficient Code

int findOdd(int arr[], int n)
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    
    return res;
}


int main() {
	
	int arr[]= {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;
	
    cout<<findOdd(arr, n);
    
}

// Variation Question


// Function to get the missing number
int getMissingNo(int a[], int n)
{
	// For xor of all the elements in array
	int x1 = a[0];

	// For xor of all the elements from 1 to n+1
	int x2 = 1;

	for (int i = 1; i < n; i++)
		x1 = x1 ^ a[i];

	for (int i = 2; i <= n + 1; i++)
		x2 = x2 ^ i;

	return (x1 ^ x2);
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int miss = getMissingNo(arr, N);
	cout << miss;
	return 0;
}
