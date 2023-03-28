#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n==0 || n==1){
        return false;
    }
    int x=int(sqrt(n));
    for(int i=2;i<x;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n=22;
    if(prime(n)){
        cout<<"it is prime";
    }
    else{
        cout<<"it is not prime";
    }

}