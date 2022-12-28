// move all zeroes to end

#include<iostream>
#include<vector>
using namespace std;

vector<int> movezeroes(vector<int>v){
    vector<int>ans;
    for(auto it:v){
        if(it!=0){
            ans.push_back(it);
        }
    }
    for(int i=ans.size();i<v.size();i++){
        ans.push_back(0);
    }
    return ans;
}

int main(){
     int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    vector<int>v1;
    v1=movezeroes(v);
    for(auto it:v1){
        cout<<it<<",";
    }
}