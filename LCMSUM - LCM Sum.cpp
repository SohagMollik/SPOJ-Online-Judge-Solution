#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll lcm_sum[1000005];
ll phi[1000005];
void solve(ll n)
{
    phi[0]=0;
    phi[1]=1;
    for(ll i=2;i<=n;i++){phi[i]=i;}
    for(ll i=2;i<=n;i++){
        if(phi[i]==i){
            for(ll j=i;j<=n;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            lcm_sum[j]+=(i*phi[i]);
        }
    }
}
int main()
{
    fast;
    solve(1000000);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=lcm_sum[n]+1;
        ans=ans*n;
        ans/=2;
        cout<<ans<<endl;
    }

    return 0;
}
