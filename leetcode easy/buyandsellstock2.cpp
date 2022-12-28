//buy and sell stock if you found cheap at first and sold for profit at middle nd make profit then again sell at end for max profit


#include<vector>
#include<iostream>
using namespace std;

int maxprofit2(vector<int>v){
    int n=v.size();
    int profit=0;
    int buy=INT_MAX;
    for(int i=1;i<=n;i++){
        if(v[i]>v[i-1]){
            profit+=v[i]-v[i-1];
        }
    }
return profit;
}

int main(){
//[7,1,5,3,6,4]  //here i buy on 2nd day (1) then sell on 3rd day (5) profit=4,buy on 4day,(3),sell on 5day (6) profit=4+3=7 
int arr[]={7,1,5,3,6,4};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
cout<<maxprofit2(v);
return 0;


}