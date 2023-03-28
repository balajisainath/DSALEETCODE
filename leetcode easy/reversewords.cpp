#include <bits/stdc++.h>
using namespace std;

string wordreverse(string x){
    string s='.'+x+'.';
    int n=x.size();
    stack<string>ans;
    vector<int>v;
    int count=0;
    for(int i=0;i<s.size();i++){
       if(s[i]=='.'){
           v.push_back(i);
       }
    }
    for(int i=0;i<v.size()-1;i++){
        ans.push(s.substr(v[i]+1,v[i+1]-v[i]-1));
    }
    string op;

    while (!ans.empty()){
        op=op+ans.top()+'.';
        ans.pop();
    }
    op.pop_back();
    return op;
}


int main(){
string s="i.like.this.program.very.much";
cout<<wordreverse(s);
}