#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "hello ";
    string b = "world";
    a+=b;
    a.push_back('a');
    a.pop_back();

    a.erase(4,1);
    cout<<a<<endl;

    return 0;
}