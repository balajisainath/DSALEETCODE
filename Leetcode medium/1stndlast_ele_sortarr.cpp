// here find the index of the target arr repeating start of ele and last where it is repeating
#include<iostream>
#include<vector>

using namespace std;

vector<int> lastfirstele(vector<int>v,int target){
    vector<int>ans;
    if(v.size()==1 && v[0]==target){
        ans.push_back(0);
        ans.push_back(0);
        return ans;
        
    }
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==target){
            ans.push_back(i);
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]==target){
            ans.push_back(i);
            break;
        }
    }
    if(ans.empty()){
       ans.push_back(-1);
       ans.push_back(-1);
    }
    return ans;
}

int main(){
     int arr[]={5,7,7,8,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    int target=8;
    vector<int>vx;
    vx=lastfirstele(v,target);
    for(int it:vx){
        cout<<it<<",";
    }
    return 0;

}
