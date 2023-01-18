#include<iostream>
using namespace std;

int secondLargest(int a[],int m){
    int largest = 0;
    int res = -1;
    for(int i=1;i<m;i++){
       if(a[i]>a[largest]){
        res = largest;
        largest = i;
       }
       else{
          if(a[i]!=a[largest]){
            if(res == -1 || a[i]>a[res]){
            res = i;
            }
          }
       }
    }
    return res;
}

int main()
{
    int a[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   cout<<secondLargest(a,n);
    return 0;
}