// buy and sell stock 1 here see on which day you buy stock is less nd when sold you gain max profit


#include<iostream>
#include<vector>
using namespace std;

int maxprofit(vector<int>v){
    int profit=0;
    int buy=INT_MAX;
    for(auto it:v){
        buy=min(buy,it);
        profit=max(it-buy,profit);
    }
    return profit;
}

int main(){
    int arr[]={7,1,5,3,6,40};
    //[7,6,4,3,1]
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    cout<<maxprofit(v);
    return 0;

}