#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    char suq[26]={0};

    for (int i = 0; i < n; i++)
    {
       cin>>suq[i-'a'];
      
    }
    for (int i = 0; i < n; i++)
    {
        cout<<suq[i-'a'];
    }
    
    

    return 0;
}