#include<stdio.h>
int main (){
 
 int a[10]={1,2,3,3,3,5,5,5,7,7};
int s = 3;
 int l = 0, h = 9;int ans =-1;
 while(l<h){
    int m = (l + h)/2;
    if(a[m]==s ){
        ans = m;
        h = m-1;
    }
    else if(a[m]>s) h = m-1;
    else if(a[m]<s) l = m+1;
 
 }
  printf("%d",ans);
        // break;
    
    return 0;
}