#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int roll;

};
int main()
{
    Person p[3];

    for(int i=0;i<3;i++)
    {
        getline(cin,p[i].name);
        cin>>p[i].roll;
        cin.ignore();


    }
    Person mx;
    mx.roll = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        if(p[i].roll>mx.roll)
        {
            mx=p[i];
        }

    }
    cout<<mx.name<<" "<<mx.roll<<endl;

    Person mn;
    mn.roll = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        if(p[i].roll<mn.roll)
        {
            mn=p[i];
        }

    }
    cout<<mn.name<<" "<<mn.roll<<endl;
    
    

    return 0;
}