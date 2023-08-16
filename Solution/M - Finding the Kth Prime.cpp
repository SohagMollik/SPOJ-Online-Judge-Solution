/*
****************************************************************
    __author__ : Sohag Mollik

 ******** Pari na kicu ********

****************************************************************
*/

#include <bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n")
#define no   printf("NO\n")
using namespace std;
vector<int>prime;
int n=86028121;
vector<int>v(n+1,0);
void seive()
{

    for(int i=2;i*i<=n;++i){
        if(v[i]==0){
            for(int j=i*i;j<=n;j+=i){
                v[j]=1;
            }
        }
    }

    for(int i=2;i<=n;++i){
        if(v[i]==0)prime.pb(i);
    }
}

int main()
{

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    seive();

    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        cout<<prime[k-1]<<nn;
    }

    return 0;
}

