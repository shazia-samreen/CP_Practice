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
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>a[i][j];
      }
  }
  map<int,int> rows,cols;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          rows[i]=(rows[i]|a[i][j]);
      }
  }
  for(int j=0;j<m;j++){
      for(int i=0;i<n;i++){
          cols[j]=(cols[j]|a[i][j]);
      }
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          pf("%lld ",(rows[i]|cols[j]));
      }
      pf("\n");
  }
return 0;
}
