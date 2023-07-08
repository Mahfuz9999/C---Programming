#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        int Hight;
        int Age;

        Person(int hi,int ag,char *n)
        {
            Hight = hi;
            Age = ag;
            strcpy(name,n);
        }
};

int main()
{

    char name[100]= "Rahim Khan";
    Person* Rahim = new Person(166,34,name);
    
    
    cout<<Rahim->name<<endl;
    cout<<Rahim->Age<<endl;
    cout<<Rahim->Hight<<endl;



    return 0;
}
