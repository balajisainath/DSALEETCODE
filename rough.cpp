#include<bits/stdc++.h>
using namespace std;




int main(){
    cout<<"hello world";
}




// int firstindex(string s, string t) {
//     int l = t.length();
//     for(int i = 0; i <= s.length() - l; i++) {
//         if(s.substr(i, l) == t) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     string s = "hello";
//     string t = "ll";
//     cout << firstindex(s, t);
//     return 0;
// }

// void solve(string str,string output,int index,vector<string>&v){
// 	if(index>=str.length()){
//           if(output.length()>0) v.push_back(output);
// 		return;
// 	}
// 	//include
// 	solve(str,output,index+1,v);

// //include
// char s=str[index];
// 	output+=s;
	
// 	solve(str,output,index+1,v);
// }
// vector<string> subsequences(string str){
	
// 	vector<string>v;
// 	string output;
// 	int index=0;
// 	solve(str,output,index,v);

// 	return v;
	
// }
// int main(){
//      string s="abc";
//      vector<string>v=subsequences(s);
//      for(auto it:v){
//           cout<<it<<endl;
//      }

//      return 0;

// }

// int main(){
    
//       string x="2393706880236110407059624696967828762752651982730115221690437821508229419410771541532394006597463715513741725852432559057224478815116557380260390432211227579663571046845842281704281749571110076974264971989893607137140456254346955633455446057823738757323149856858154529105301197388177242583658641529908583934918768953462557716z97438020429952944646288084173334701047574188936201324845149110176716130267041674438237608038734431519439828191344238609567530399189316846359766256507371240530620697102864238792350289978450509162697068948604722646739174590530336510475061521094503850598453536706982695212493902968251702853203929616930291257062173c79487281900662343830648295410";
//         x.push_back('a');
//         int n=x.size();
//         int last=0;
//        vector<string> ss;
//         while(last<n){
//             if(isdigit(x[last])){
//                 for(int i=last+1;i<n;i++){
//                     if(isdigit(x[i])){
//                         continue;
//                     }else{
//                        long long int l;
//                         istringstream(x.substr(last,i-last))>>l;
//                         cout<<(l)<<endl;
//                         last=i;
//                         break;
//                     }
//                 }
//             }

//             last++;
//         }

        
//     }
   
