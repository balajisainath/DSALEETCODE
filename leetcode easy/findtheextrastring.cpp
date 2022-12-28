// given two strings find the extra char in second string
#include<iostream>
#include<string>
#include<strings.h>
using namespace std;

char extrastring(string s1,string s2){
   //method 1 sum of s1 and sum s2 then diff of both gives the diff char
    int a=0;
    int b=0;
    for(int i=0;i<s1.size();i++) a+=s1[i];
    for(auto it:s2) b+=it;
    return b-a;

}

int main(){
    string s1="abc";
    string s2="abcd";
    cout<<extrastring(s1,s2);
    return 0;
}