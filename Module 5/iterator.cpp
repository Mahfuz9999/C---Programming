#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string:: iterator it;
    cin>>s;

    for(it = s.begin();it < s.end();it++)
    {
        cout<<*it<<endl;
    } 
    return 0;
}