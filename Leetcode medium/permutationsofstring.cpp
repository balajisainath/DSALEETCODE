#include <bits/stdc++.h>
// int this programme is that to produce all the permutations of a given string
//approach backtracking
using namespace std;

void solve(string s,set<string>&v,int index){
    if(index>=s.size()){
        v.insert(s);
        return;
    }
    for(int i=index;i<s.size();i++){
        swap(s[index],s[i]);
        solve(s,v,index+1);
        swap(s[index],s[i]);
    }
}

vector<string> permutationsofstring(string s){
    set<string>v;
    vector<string>ans;
    solve(s,v,0);
    for(auto it:v){
        ans.push_back(it);
    }
    return ans;

}

int main(){
    string s="ABC";
    vector<string> x= permutationsofstring(s);
    for(auto it:x){
        cout<<it<<", ";
    }
    return 0;
}