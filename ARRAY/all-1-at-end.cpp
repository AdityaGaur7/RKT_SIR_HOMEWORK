#include<bits/stdc++.h>
using namespace std;
int main (){
    // int arr[8]={2,4,2,7,8,1,3,2};
     int arr[8]={0,1,0,1,0,0,1,0};
    int n = 8;


    
    // sort(arr,arr+n); // sorting below 

    for(int i = 0;i<n-1;i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }

// two pointer //
//  int arr[8]={0,1,0,1,0,0,1,0};
//     int n = 8;
// int s = 0,e = n-1;
// while(s<e){
//     if(arr[s]==0)s++;
//     if(arr[e]==1) e--;
//     else if(arr[e]==0 && arr[s]==1) swap(arr[e],arr[s]);
// }


    for(int i= 0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}