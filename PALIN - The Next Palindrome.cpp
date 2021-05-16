#include<bits/stdc++.h>
using namespace std;
bool palim(int);
int main()
{
    int t;
    cin>>t;
    //while(t--){
       int n;
       cin>>n;
       while(palim(n)==false){
        n++;
       }
       cout<<n<<endl;
    //}
    return 0;
}
bool palim(int n)
{
    int ok=n;
    int rev=0,rem;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10) + rem;
        n/=10;
    }
    if(ok==rev)
        return true;
    else
        return false;
}
