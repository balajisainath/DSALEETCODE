#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return p1.first<p2.first;
}

vector<int> sortarrvalues(vector<int>s){
    map<int,int>mp;
    vector< pair<int,int> > v;
    vector<int> ans;
    for(int it:s){
        mp[it]++;
    }
    for(auto it:mp){
        v.push_back({it.second,it.first});
    }
    sort(v.begin(),v.end());

}


int main(){
int arr[]={1,1,2,2,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>s(arr,arr+n);
vector<int>v=sortarrvalues(s);
for(int it :v){
    cout<<it<<",";
}
return 0;

}