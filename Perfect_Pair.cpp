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
      cin>>n;
      int a[n];
      map<int,int> m;
      for(int i=0;i<n;i++){
          cin>>a[i];
          m[a[i]]++;
      }
      int count=0;
      for(int i=1;i<=1000;i++){
          for(int j=i;j<=1000;j++){
              if(m.count(i)==1 && m.count(j)==1){
                  int sum=i+j;
                  int sq=sqrt(sum);
                  int cb=cbrt(sum);
                  if(sq*sq==sum || cb*cb*cb==sum){
                        //pf("numbers are %lld %lld sum is %lld\n",i,j,sum);
                        if(i==j){
                            count+=(m[i]*(m[i]-1))/2;
                        }else{
                            count+=m[i]*m[j];
                        }
                      //pf("count became %lld\n",count);
                  }
              }
          }
      }
      pf("%lld\n",count);
  }
return 0;
}
