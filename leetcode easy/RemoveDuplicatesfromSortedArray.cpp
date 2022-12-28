// remove duplicates from sorted array and return count of curr elements

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeduplicates(vector<int> v,int n){
    set<int>s;
    for(auto it:v){
        s.insert(it);
    }
    return s.size();
}

int main(){
    vector<int>v;
    cout<<"enter the size";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<removeduplicates(v,n);
    return 0;

}