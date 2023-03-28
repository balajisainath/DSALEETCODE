#include<iostream>
#include<string>
using namespace std;

int pal(string s){

    int n=s.length()-1;
    int count=0;
    int i=0;
        while(i<n){
            if(s[i]!=s[n]){
                break;
            }
            else{
               count++;
            }
            i++;
            n--;
        }
      return count;
    
}

int main(){
    string s="aabbcc";
   
   cout<<pal(s);


}