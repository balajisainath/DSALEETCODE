// return the unique triplets where there sum is equal to 0
#include<iostream>
#include<vector>

using namespace std;

vector< vector<int> > sum3(vector<int>v){
    vector< vector<int> >ans;
sort(v.begin(),v.end());
    for(int i=0;i<v.size()-2;i++){
        if(i==0 || (i>0 && v[i]!=v[i-1])){
            int lo=i+1,hi=v.size()-1,sum=-v[i];
            while(lo<hi){
                if(v[lo]+v[hi]==sum){
                    vector<int>temp;
                    temp.push_back(v[lo]);
                    temp.push_back(v[hi]);
                    temp.push_back(v[i]);
                    ans.push_back(temp);

                    while(lo<hi &&(v[lo]==v[lo+1])) lo++;
                    while(lo<hi && v[hi]==v[hi-1]) hi--;
                    lo++;
                    hi--;
                }
                else if(v[lo]+v[hi]<sum){ lo++;}
                else hi--;
            }
        }
    }
    return ans;
}
int main(){

    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
   vector< vector<int> > x;
   x=sum3(v);
   for (int i = 0; i < x.size(); i++) {
    cout<<'[';
        for (int j = 0; j < x[i].size(); j++)
            cout << x[i][j] << ",";
        cout<<']';
        cout << endl;
    }
    
   return 0;

}