#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string expression){
    stack<char>st;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];
        //for opening bracket
        if(ch=='['|| ch == '{' || ch == '('){
            st.push(ch);
        }
        else{
            //means closing bracket
            if(!st.empty()){ //to check stack is not empty
                char t = st.top();
                if((ch == '[' && t == ']')|| (ch == '{' && t == '}') || (ch == '(' && t ==')')){
                   st.pop();
                }else{
                    return false;
                }
            } else{
                return false;
            }
        }
    }
    return st.empty();    
}
int main(){
    string s;
    cin>>s;
    bool t = isValidParenthesis(s);
    if(t == true){
        cout<<"Expression is valid"<<endl;
    }
    else{
        cout<<"Expression is not valid"<<endl;
    }
    return 0;
}