#include<bits/stdc++.h>
using namespace std;

void push_zeros_to_end(vector<int>& arr)
{
  int count = 0;
  for (int i = 0; i < arr.size();i++){
     if(arr[i] != 0){
       swap(arr[i], arr[count]);
       count++;
     }
  }
}

int main(){

vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};

push_zeros_to_end(arr);

for (int i = 0; i < arr.size(); i++){
    cout << arr[i]<<" ";
}

  return 0;
}
