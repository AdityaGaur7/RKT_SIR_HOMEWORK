  #include <bits/stdc++.h> 
using namespace std; 

   bool isop(char x){
  switch (x) {
  case '+':
  case '-':
  case '/':
  case '*':
  case '^':
  case '%':
    return true;
  }
  return false;
}
    string preToInfix(string pre_exp) {
        
     
        stack<string>s;
        int n = pre_exp.size();
        for(int i=n-1;i>=0;i--){
            if(isop(pre_exp[i])){
                string op1=s.top();s.pop();
                string op2 = s.top();s.pop();
                string t = "(" + op1 + pre_exp[i]+op2+")";
                s.push(t);
            }
            else{
                s.push(string(1,pre_exp[i]));
            }
            
        }
        return s.top();
        
    }
    int main(){


string exp = "a+b*(c^d-e)^(f+g*h)-i"; 

	preToInfix(exp); 
      cout<<exp;
        return 0;
    }