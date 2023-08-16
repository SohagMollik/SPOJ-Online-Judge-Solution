/*
****************************************************************
    __author__ : Sohag Mollik

 ******** Pari na kicu ********

****************************************************************
*/

#include <bits/stdc++.h>
using namespace std;
const int n=1e8;
vector<bool>vec(n,true);
vector<int>prime;
void solve()
{
    for(int i=2;i*i<=n;++i){
        if(vec[i]==true){
            for(int j=i*i;j<=n;j+=i){
                vec[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(vec[i]==true)prime.push_back(i);
    }

    for(int i=1;i<prime.size();i+=100){
        printf("%d\n",prime[i-1]);
    }
}
int main()
{
    solve();
    return 0;
}

