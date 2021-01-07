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
  string str;
  getline(cin,str);
  int n=str.length();
  int m[256]={0};
  int maxi=INT_MIN;
  char ch;
  for(int i=0;i<n;i++){
      m[str[i]]++;
      //pf("%lld %c\n",i,ch);
      if(maxi<=m[str[i]]){
          //pf("%lld %lld %c %c\n",maxi,m[i],ch,str[i]);
          if(maxi==m[str[i]]){
              if(ch<str[i]){
                  ch=str[i];
              }
          }else{
                maxi=m[str[i]];
                ch=str[i];
          }
      }
  }
  pf("%c %lld\n",ch,maxi);
    return 0;
}
