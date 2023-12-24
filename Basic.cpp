//Friend without public

#include<iostream>
using namespace std;
class alpha
{
    private:
    int frndVar=10;
    
  
    friend void call_friend();
};

void call_friend()
{
    alpha anyVar;
    int x=anyVar.frndVar;
    cout<<x;
}
int main()
{
    call_friend();
    return 0;
}


//if need to pass value into variable within required function ..ie use private var but values user def
//first store using public then use in calling func
#include<iostream>
using namespace std;
class alpha
{
    private:
    int frndVar;
    
    public:
    alpha(int use=0)  //constructor
    {
        frndVar=use;
    }
    friend void call_friend();
};

void call_friend()
{
    alpha anyVar(10);
    int x=anyVar.frndVar;
    cout<<x;
}
int main()
{
    call_friend();
    return 0;
}
