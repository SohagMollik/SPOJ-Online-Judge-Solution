#include <bits/stdc++.h>
using namespace std;
int solve(int a,int b, int m){
if(b==0)return 1;
else if(b%2==1){
    int p=a%m;
    int q=(solve(a,b-1,m))%m;
    return (p*q)%m;
}
else{
    int p=(solve(a,b/2,m))%m;
    return (p*p)%m;
}

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b,10)<<"\n";
    }

    return 0;
}

