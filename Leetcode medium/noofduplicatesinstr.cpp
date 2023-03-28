// in this question get all the strings into group of vectors if the no of duplicates in str is equal



#include<bits/stdc++.h>
using namespace std;

// vector< vector<string> > groupnoofdupstr(vector<string>s){

//     vector< vector<string> > ans;
//     vector<int>v;
    
    
//     for(int i=0;i<s.size();i++){
//         map<char,int>mp;
//         int count=0;
//         for(int j=0;j<s[i].size();j++){
//              mp[s[i][j]]++;
//         }
//         for(auto it:mp){
//             if(it.second>1){
//             count++;
//             }
//         }
//         v.push_back(count);
//         mp.clear();

//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         for(int j=i+1;j<v.size;j++){
//             if(v[i]==v[j]){
//                 vector<string>temp;
//                 temp.push_back(s[i]);
//                 temp.push_back(s[j]);
//                 ans.push_back(temp);
//             }
//         }
//     }

//     return temp;
    

// }


int main(){
    string arr[]={"abc","abbbc","uahau","fghg","kvukkv","hhcych"};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<string>s(arr,arr+n);
    vector<int>v;
    vector< vector<string> > ans;
    for(int i=0;i<int(s.size());i++){
        map<char,int>mp;
        int count=0;
        for(int j=0;j<int(s[i].size());j++){
             mp[s[i][j]]++;
        }
        for(auto it:mp){
            if(it.second>1){
            count++;
            }
        }
        v.push_back(count);
        mp.clear();

    }
    for (int i = 0; i <int( v.size()); i++)
    { vector<string>temp;
        for(int j=i+1;j<int(v.size());j++){
           
            if(v[i]==v[j]){
                temp.push_back(s[j]);
                
            }
        }
        ans.push_back(temp);
    }

    for(int i=0;i<int(ans.size());i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<string(ans[i][j]);
        }
        cout<<endl;
    }

    

}