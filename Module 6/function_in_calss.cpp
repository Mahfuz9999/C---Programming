#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int height;

    Person(string nm, int ag, int hi)
    {
        name = nm;
        age = ag;
        height = hi;
    }
    void Name()
    {
        cout<<"hehe"<<endl;
    }
};
int main()
{
    Person Fahad("Md Mahfuz",23,165);
    cout<<Fahad.name<<' '<<Fahad.height<<" "<<Fahad.age<<endl;
    Fahad.Name();
    return 0;
}