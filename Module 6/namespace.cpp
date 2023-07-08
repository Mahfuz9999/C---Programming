#include<bits/stdc++.h>
using namespace std;
namespace Fahad
{
    int age= 23;
    void hello()
    {
        cout<<"hello Fahad";
    }

}

namespace Fahim 
{
    int age2 = 26;
    void hello2()
    {
    cout<<"hello Fahim";
    }

}

using namespace Fahad;
using namespace Fahim;

int main()
{
    hello2();

    
    return 0;
}