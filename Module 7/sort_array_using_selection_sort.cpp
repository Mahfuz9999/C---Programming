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

    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(p[i].roll > p[j].roll)
            {
                swap(p[i],p[j]);
            }
        }
    }


    for(int i=0;i<3;i++)
    {
        cout<<p[i].name<<" "<<p[i].roll<<endl;
    }
    
    return 0;
}