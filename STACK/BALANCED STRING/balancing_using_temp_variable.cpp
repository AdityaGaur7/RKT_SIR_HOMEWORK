#include <bits/stdc++.h>
using namespace std;
int temp = 0;

bool precheck(int a){
    if(a<0){
        return 0;
    }
    else{
        return 1;
    }
}

bool check(string s){
    for(int i=0;i<s.length();i++){
        if((s[i]=='(' ||s[i]=='{' || s[i]=='[')){
            temp++;
            if(precheck(temp)==0){
                return 0;
            }
            
            
        }
        else if((s[i]==')' ||s[i]=='}' || s[i]==']')){
            temp--;
            if(precheck(temp)==0){
                return 0;
            }
            
        }
    }
    if(temp==0)
    return 1;
    else
    return 0;
}


int main(){
    string s;
    cin>>s;
    if(check(s)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not balanced";
    }
    return 0;
}