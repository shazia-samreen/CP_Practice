#include<stdio.h>
#include<bits/stdc++.h>
#define vi vector<int>
#define int long long 
#define pf printf
#define mod 1000000007
using namespace std;
void boost(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 
}
int pow(int n,int m){
    if(m%2==0){
      int pro=pow(n,m/2);
      return ((pro)%mod*(pro)%mod)%mod;
    }else{
       return ((n)%mod*(pow(n,m-1))%mod)%mod;
    }
}
int32_t main(){
  boost();
  int t;
  cin>>t;
  map<string,int> m;
  while(t--){
     string str;
     cin>>str;
     if(m[str]==0){
         cout<<"OK\n";
     }else{
         cout<<str<<to_string(m[str])<<'\n';
     } 
      m[str]++;
  }
return 0;
}
