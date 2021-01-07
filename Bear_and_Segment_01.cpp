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
      string str;
      cin>>str;
      int flag=0,pre;
      int ans=1;
      for(int i=0;i<str.length();i++){
          if(flag==0){
              if(str[i]=='0'){
                  continue;
              }else{
                  flag=1;
                  pre=i;
              }
          }else{
              if(str[i]=='0'){
                  continue;
              }else{
                  //pf("pre-%lld\n",pre);
                  if(pre+1==i){
                    pre=i;          
                  }else{
                      ans=0;
                      break;
                  }
              }
          }
      }
      if(ans && flag){
          pf("YES\n");
      }else{
          pf("NO\n");
      }
  }
return 0;
}
