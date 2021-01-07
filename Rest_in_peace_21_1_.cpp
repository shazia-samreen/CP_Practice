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
  while(t--){
      int n;
      string str;
      cin>>str;
      n=stoi(str);
      if(n%21==0){
          pf("The streak is broken!\n");
      }else{
          int flag=0;
          for(int i=0;i<str.length()-1;i++){
              if(str[i]=='2' && str[i+1]=='1'){
                  flag=1;
                  break;
              }
          }
          if(flag==1){
              pf("The streak is broken!\n");
          }else{
              pf("The streak lives still in our heart!\n");
          }
      }
  }
return 0;
}
