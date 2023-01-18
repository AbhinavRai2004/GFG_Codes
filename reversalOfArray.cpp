#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array before reverse operation"<<endl;
    for(int i= 0;i<n;i++){
       cout<<a[i]<<" ";
    }

    int f = 0
    int l = n-1;

    while(f<l){
        swap(a[f],a[l]);
        f++;
        l--;
    }

    cout<<endl<<"The array after reverse operation"<<endl;
    
    for(int j=0;j<n;j++){
      cout<<a[j]<<" ";
    }
    
    return 0;
}