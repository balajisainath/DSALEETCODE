#include<iostream>
#include<vector>
using namespace std;

string minumumwindow(string s,string t){
    if(s.size()==0 || t.size()==0 || s.length()<t.length()){
        return "";
    }
    int start=0,end=0,ans_start=0,count=0;
    int minlen=INT_MAX;
    vector<int>freq(256,0);
    for(int i=0;i<t.length();i++){
        freq[t[i]]++;
    }
    while (end<s.length())
    {
        if(freq[s[end]]>0){
            count++;
        }
        freq[s[end]]--;
        while (count==t.length()){
            if(minlen>end-start+1){
                minlen=end-start+1;
                ans_start=start;
            }
            freq[s[start]]++;
            if (freq[s[start]]>0){
                count--;
            }
            start++;
            
        }
        end++;
    }
    if(minlen==INT_MAX){
        return "";
    }
    return s.substr(ans_start,minlen);
    
}


int main(){
string s="ADOBECODEBANC";
string t="ABC";
cout<<minumumwindow(s,t);

}