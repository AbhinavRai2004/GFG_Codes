// #include<iostream>
// using namespace std;

// // this is naive soiution.
// int main()
// {
//     int a[100],n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j])
//             count++;
//      } 
//        if(count % 2 != 0)
//        cout<<a[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int a[50],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res1 = 0;
    int res2 = 0;
    int xor =0;
    for(int i=0;i<n;i++){
        xor = xor^a[i];
    }

    int id = ~(xor-1);
    int ld = xor & id;
    for(int j=0;j<n;j++){
        if(a[j] & ld!=0)
          res1 = res1^a[j];

          else
          res2 =res2^a[j];
     }
     cout<<res1<<" "<<res2;
    return 0;
}