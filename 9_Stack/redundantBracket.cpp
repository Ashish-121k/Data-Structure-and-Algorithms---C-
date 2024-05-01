#include<iostream>
#include<stack>
using namespace std;

 bool solve(string s){
    stack<char>st;
    
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        
        if(ch == ')'){
            int count = 0;
            while(!st.empty() && (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')){
                count ++ ;
                st.pop();
            }
            st.pop();
            if(count == 0){
                return false;
            }   
        }    
    }
    
    return true  ;

}

int main()
{
   string s = "((a+b)*(c+d))";
   bool ans = solve(s);
   if(ans){
    cout<<"Redundant bracket not present"<<endl;
   }
   else{
    cout<<"Redundant bracket present"<<endl;
   }
    return 0;
}