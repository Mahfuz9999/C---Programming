#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }

    
};
int main()
{

    Person Fahad("Md Mahfuz",23);
    cout<<Fahad.name<<" "<<Fahad.age<<endl;
    
    
    return 0;
}