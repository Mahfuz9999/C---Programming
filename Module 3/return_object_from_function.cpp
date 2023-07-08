#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        int Height;
        int Age;

     Person(int hi,int ag,char *n)
     {
         Height = hi;
         Age = ag;
         strcpy(name,n);
     }
};
Person fun()
{
    char name[100] = "Karim Ullah";
    Person Karim(166,43,name);
    return Karim;
}
int main()
{
    Person Karim = fun();

    cout<<Karim.name<<endl;
    cout<<Karim.Age<<endl;
    cout<<Karim.Height<<endl;


   

   
    
    
    return 0;
}
