// sort characters by frequency

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int> &a,pair<char,int>&b){
    return a.second>b.second;
}

string sortcharbyfreq(string s){
    map<char,int>mp;
    for(char it:s){
        mp[it]++;
    }
    vector<pair<char,int> > v;
    for(auto it:mp){
        v.push_back(it);
    }
    string c;
    sort(v.begin(),v.end(),cmp);
    for(auto it:v){
        for(int i=0;i<it.second;i++){
            c+=it.first;
        }
    }
    return c;
}


int main(){

string s="cccaaa";
cout<<sortcharbyfreq(s);
}