// p.s convert roman numbers in to numbers

#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>

using namespace std;

int romannumbers(string s){
    unordered_map<char,int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;){
        if(mp[s[i]]<mp[s[i+1]]){
            ans+=mp[s[i+1]]-mp[s[i]];
            i+=2;
        }
        else{
            ans+=mp[s[i]];
            i++;
        }
    }
    return ans;
}

int main(){
string s="XXI";

cout<<romannumbers(s);
return 0;
}