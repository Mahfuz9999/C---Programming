#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char Section;
        int cls;


};

int main()
{
    Student Rahim;
 
        char nm[100]="Rahim Khan";
        strcpy(Rahim.name,nm);
        Rahim.roll = 23;
        Rahim.Section = 'A';
        Rahim.cls = 9;

        Student Karim;
        char kn[100]= "Karim Ullah";
        strcpy(Karim.name,kn);
        Karim.roll = 44;
        Karim.Section = 'B';
        Karim.cls= 10;



        
        cout<<Rahim.cls<<endl;
        cout<<Rahim.Section<<endl;
        cout<<Rahim.roll<<endl;
        cout<<Rahim.name<<endl;

        cout<<endl;
        cout<<Karim.name<<endl;
        cout<<Karim.roll<<endl;
        cout<<Karim.Section<<endl;
        cout<<Karim.cls<<endl;


        
    return 0;
}