#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int roll;

};
bool cmd(Person a, Person b)
{
    if(a.roll > b.roll) return true;
    else return false;
}
int main()
{
    Person p[3];

    for(int i=0;i<3;i++)
    {
        getline(cin,p[i].name);
        cin>>p[i].roll;
        cin.ignore();


    }

   sort(p,p+3,cmd);

    for(int i=0;i<3;i++)
    {
        cout<<p[i].name<<" "<<p[i].roll<<endl;
    }
    
    return 0;
}