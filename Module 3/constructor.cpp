#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        int Hight;
        int Age;
        char section;
    
    Person(int hi,int ag,char sec,char* nm)
    {
        Hight = hi;
        Age = ag;
        section = sec;
        strcpy(name,nm);

    }

       
};
int main()
{
     Person Karim(140,23,'A',"Karim Ullah");

     cout<<Karim.Age<<endl;
     

    return 0;
}
