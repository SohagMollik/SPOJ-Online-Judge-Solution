#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2){
      if(strstr(s1.c_str(),s2.c_str()))
        cout<<1<<endl;
    else
        cout<<0<<endl;
    }
}
