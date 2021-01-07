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
      string str,str1="SUVO",str2="SUVOJIT";
      cin>>str;
      int count1=0,count2=0;
      for(int i=0;i<str.length();i++){
          int flag=0,init=i;
          //pf("i is %lld\n",i);
          for(int j=0;j<str2.length();j++){
              //pf("%c",str2[j]);
              if(str[i]==str2[j]){
                  if(j==str2.length()-1){
                      count2++;
                  }
                  i++;
              }else{
                  flag=1;
                  break;
              }
              //count1++;
          }
          //pf("flag-%lld\n",flag);
          
          if(flag==1){
              i=init;
              flag=0;
                for(int j=0;j<str1.length();j++){
                    //pf("%c",str2[j]);
                    if(str[i]==str1[j]){
                        if(j==str1.length()-1){
                            count1++;
                        }
                        i++;
                    }else{
                        flag=1;
                        break;
                    }
                }
                //pf("\n");
          }
          if(flag==0){
             i--;
          }else{
               i=init;
          }
      }
      pf("SUVO = %lld, SUVOJIT = %lld\n",count1,count2);
  }
return 0;
}
