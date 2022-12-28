//find the intersection of two arrays

#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

void intersectionarray(vector<int> v,vector<int>v1){
    vector<int>ans;
    set<int>s;
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int i=0,j=0;
    while(i<v.size() && j<v1.size()){
if(v[i]>v1[j]){
    j++;
}
else if(v[i]<v1[j]){
    i++;
}
else{
    s.insert(v[i]);
    i++;
    j++;
}
}
for(auto it:s){
    ans.push_back(it);
}
for(auto it:ans){
    cout<<it;
}

}

int main(){
    int arr[]={1,2,2,1};
    int arr1[]={2,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    vector<int>v(arr,arr+n);
    vector<int>v1(arr1,arr1+n1);
   intersectionarray(v,v1);
    
    return 0;

}