#include<iostream>
using namespace std;

void count(int q){
    if(q==1){
        return ;
    }
    cout<<q<<" ";
    return count(q-1);
}
int main()
{
    int n;
    cin>>n;
    count(n);
    return 0;
}