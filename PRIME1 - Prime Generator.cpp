#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define max 32000
bool prime[max];
vector<int>v;
void sieve()
{
   int i,j;
   for(i=0;i<max;i++)prime[i]=true;
   for(i=4;i<=max;i+=2)prime[i]=false;
   for(i=3;i*i<=max;i+=2){
    if(prime[i]==true){
       for(j=i*i;j<=max;j+=i){
        prime[j]=false;
       }
    }
   }
   v.push_back(2);
   for(i=3;i<=max;i+=2){
    if(prime[i]==true)v.push_back(i);
   }
}
void segSieve(ll l,ll r)
{
    bool isprime[r-l+1];
    for(int i=0;i<r-l+1;i++)isprime[i]=true;
    if(l==1)isprime[0]=false;
    for(int i=0;v[i]*v[i]<=r;i++){
        int cp=v[i];
        int base=(l/cp)*cp;
        if(l>base)base+=cp;
        for(int j=base;j<=r;j+=cp){
            isprime[j-l]=false;
        }
        if(base==cp)isprime[base-l]=true;
    }
    for(int k=0;k<r-l+1;k++){
       if(isprime[k]==true)cout<<(k+l)<<endl;
    }
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        segSieve(l,r);
    }
}
