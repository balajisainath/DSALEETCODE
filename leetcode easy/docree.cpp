// a and b eats from start of string and b from end of string if both eat same type return how many same are they eating
#include<iostream>
using namespace std;

int pal(string s){
    int count=0;
    int n=s.length();
for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-i-1]){
       break;
    }
    count++;
}
    return count;
}
int main(){
    string s="aabbaa";
 cout<<pal(s);   
}