// push all the numbers in string 

#include<bits/stdc++.h>
using namespace std;

// string numinstring(string s){
//     string ans="";
//     for(int i=0;i<s.size();i++){
//         if(isdigit(s[i])){
//             ans+=s[i];
//         }
//     }
//     return ans;
// }


int main(){
    string s="123t45gf89";
    string c="";
    // cout<<numinstring(s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            c+=s[i];
        }
        
    }
    cout<<c;

}