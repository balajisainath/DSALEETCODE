#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<unordered_map>
using namespace std;

string lastsubstring(string s,string t){
 
if(s.size()==0 || t.size()==0 || s.size()<t.size()){
            return "";
        }
        int end=0,start=0,count=0,index=0;
        int minlen=INT_MAX;
        vector<int>v(256,0);
        for(int i=0;i<t.size();i++){
            v[t[i]]++;
        }


        while(end<s.size()){
            if(v[s[end]]>0){
                count++;
            }
            v[s[end]]--;
            while(count==t.size()){
                if(minlen>end-start+1){
                    minlen=end-start+1;
                    index=start;
                }
                v[s[start]]++;
                if(v[s[start]]>0){
                    count--;
                }
                start++;
            }
            end++;
        }
        if(minlen==INT_MAX){
            return "";
            
            }

        return s.substr(index,minlen);
        }

int main(){
    string s="ADOBECODEBANC";
   string t="ABC";
    cout<<lastsubstring(s,t);


}