#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[6]={1,2,3,5,6,7};
    int n = 6;


    // sum wala // 
    
// int sum =0;
// for (int i = 0; i < n; i++)
// {
//    sum+=arr[i];

// }
// int total = ((n+1)*(n+2))/2;
// cout<<total-sum;


//   xor //


// int x =1;

// for (int i = 0; i < n; i++)
// {
//     x = x^arr[i];
// }
// int ans=1 ;
// for(int i = 1 ;i<=n+1;i++ ){
// ans = ans^i;
// }

// int fin = ans^x;

// cout<<fin;



//   using next element // 

// for (int i = 0; i < n; i++)
// {
//     if(arr[i]!=arr[i+1]-1) {
//         cout<<arr[i]+1;
//         break;
//     }
// }

//  using index //

for (int i = 0; i < n; i++)
{
    if(arr[i]!=i+1) {
        cout<<arr[i]-1; 
        // cout<<i+1;

        break;
    }
}


// cout<<fin;


    // for(int i= 0;i<n;i++){
    //     cout<<arr[i];
    // }
    return 0;
}