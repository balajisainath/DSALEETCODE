#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    map<char,int>mp;vector<int>v,vodd;
    int maxodd=0,counteven=0,countodd=0,x=0;

    for(auto it:s) mp[it]++;
    if(mp.size()==1){
        for(auto it:mp){
            return it.second;
        }
    }
   for(auto it:mp) v.push_back(it.second);

   sort(v.begin(),v.end());
   for(auto it:v){
    if(it%2==0){
        counteven+=it;
    }
    else{
        vodd.push_back(it);
    }
   }

   if(vodd.size()>0){
   for(auto it:vodd){
       maxodd=max(maxodd,it);
   }
   for(auto it:vodd){
       countodd+=(it-1);
   }
    x=countodd+1-maxodd;}


   cout<< counteven+x+maxodd;

}