#include<iostream>
#include<vector>
using namespace std;

vector<int> plusone(vector<int>v){
    int n=v.size()-1;
    for(int i=n;i>=0;i--){
        if(v[i]<9){
            v[i]+=1; //last element less than 9 then simply +1 add and return 
            return v;
        }
        else{
            v[i]=0; //else put 0 at index
        }
    }
    v.push_back(0); //as size has to be increases so push 0 at end
    v[0]=1; //and put 1 at begining this is for edge case [9,9,9]
    return v;

}


int main(){
    //int arr[]={1,2,3};
    int arr[]={1,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    vector<int>v1;
    v1=plusone(v);
    for(auto it:v1){
        cout<<it;
    }


}