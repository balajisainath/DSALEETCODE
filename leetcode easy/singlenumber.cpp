//find a number that is not repeating ans appears only one time
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int singlenumber(vector<int>v){
    unordered_map<int,int>mp;
    int ans;
    for(auto it:v){
        mp[it]++;
    }
    for(auto it:mp){
        if(it.second==1){
            ans=it.first;
        }
    }
    return ans;

}

int main(){
    int arr[]={1,1,2,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    cout<<singlenumber(v);
    return 0;
}