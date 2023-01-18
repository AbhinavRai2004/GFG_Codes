#include <iostream>
#include <cmath>
using namespace std;

// NAIVE APPROACH.

bool isSorted(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++){
          if(arr[j] < arr[i])
			return false;
		}

	}
	return true;
} 

// EFFICIENT APPROACH.

bool isSorted(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
	    if(arr[i] < arr[i - 1])
	        return false;
	}

	return true;
} 
    
int main() {
      int arr[] = {7, 2, 30, 10}
      int n = 4;
      printf("%s", isSorted(arr, n)? "true": "false");
}