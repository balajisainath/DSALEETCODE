// check whether the opened parenthesis are closed are not (){}[] like this
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool validparenthesis(string s){
    stack<char>st;
    for(auto x:s){
        switch (x)
        {
        case '(':st.push(x);break;
        case '{':st.push(x);break;
        case '[':st.push(x);break;
        case ')':if(st.empty() || st.top()!='(') return false; else st.pop(); break;
        case '}':if(st.empty() || st.top()!='{') return false; else st.pop(); break;
        case ']':if(st.empty() || st.top()!='[') return false; else st.pop(); break;
        default:
            break;
        }
    }
    return st.empty();
}

int main(){
    string ss="()[]{}";
    //string ss="({([])}())";
    if(validparenthesis(ss)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}