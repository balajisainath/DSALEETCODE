// find the index pairs only the no of kballs can fit in between array values
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[9]={3,7,3,1,5,3,3,3,6};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    vector< vector<int> >ans;
    for(int i=1;i<n;i++){

         if(v[i-1]==k && v[i]==k){
            vector<int>temp;
            temp.push_back(i);
            temp.push_back(i+1);
            ans.push_back(temp);
        }
        else if(v[i-1]==k || v[i]==k){
            if(v[i-1]>k || v[i]>k){
            vector<int>temp;
            temp.push_back(i);
            temp.push_back(i+1);
            ans.push_back(temp);}
        }
        
    }
    for(int i=0;i<int(ans.size());i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}