#include <bits/stdc++.h>
using namespace std;
#define max 100

char stack_arr[max];
int top = -1;

void push(char a){
   if(top==max-1){
    cout<<"stack overflow"<<endl;
   }
   else{
    top++;
    stack_arr[top] = a;
   }
}

void pop(){
    // char a;
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }
    else{
        //  a =stack_arr[top];
        top--;
    }
    // return a;
}

bool check(string s){
    for(int i=0;i<s.length();i++){
        char sym  = s[i];
        switch(sym){
            case ('(' || '{' || '['):
            push(sym); break;

            case ')':
            if(stack_arr[top]){
                pop();
            }
            else{
                return 0;;
            }
            // pop();
            break;

             case '}':
           if(stack_arr[top]){
                pop();
            }
            else{
                return 0;;
            }
            // pop();
            break;

             case ']':
           if(stack_arr[top]){
                pop();
            }
            else{
                return 0;;
            }
            // pop();
            break;

            default:
            continue;
            
        }

    }
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
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