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


//accessing 2 variables in 2 diff class
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
class beta
{
    private:
    int frndVar2;
    
    public:
    beta(int use2=0)  //constructor
    {
        frndVar2=use2;
    }
    friend void call_friend();
};

void call_friend()
{
    alpha anyVar(10);
    beta anyVar2(20);
    int x=anyVar.frndVar+anyVar2.frndVar2;
    cout<<x;
}
int main()
{
    call_friend();
    return 0;
}

//use 2 variables of single private
#include<iostream>
using namespace std;
class alpha
{
    private:
    int frndVar1;
    int frndVar2;
    
    public:
    alpha(int use1=0,int use2=0)  //constructor 0 important 
    {
        frndVar1=use1;
        frndVar2=use2;
    }
    friend void call_friend();
};

void call_friend()
{
    alpha anyVar(10,20);  //you need only one object for one class..no multiple in frnd func
    int x=anyVar.frndVar1+anyVar.frndVar2;
    cout<<x;

   // int n1,n2;   //user defined
   // cout<<"ENter Num1\n";
   // cin>>n1;
   // cout<<"ENter Num2\n";
   // cin>>n2;
   // alpha anyVar(n1,n2);
}
int main()
{
    call_friend();
    return 0;
} 
