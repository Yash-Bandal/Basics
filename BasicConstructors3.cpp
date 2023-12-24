
//use 2 variables of single private
#include<iostream>
using namespace std;
class alpha
{
    private:
    int frndVar1;
    int frndVar2;
    
    public:
    //paramterized constructor
    // alpha(int use1=0,int use2=0)  //constructor 0 important 
    // {
    //     frndVar1=use1;
    //     frndVar2=use2;
    // }
    
    //or copy
    alpha(int use1,int use2):frndVar1(use1),frndVar2(use2) {}
    
    //or default
     //alpha()  //constructor 0 important 
    // {
    //     frndVar1=10;
    //     frndVar2=20;
    // }
    
    friend void call_friend(alpha &anyVar);
    void display() //optional
    {
        cout<<"Your variables are "<<frndVar1<<" and "<<frndVar2;
    }
};

void call_friend(alpha &anyVar)
{
   //you need only one object for one class..no multiple in frnd func
    int x=anyVar.frndVar1+anyVar.frndVar2;
     
    cout<<x;
}
int main()
{   alpha anyVar(10,20);
anyVar.display();

cout<<"\nYour FriendFucntion Calculation is ";
   call_friend(anyVar);
    return 0;
} 



//only copy constr use to create nultiple coies


//use 2 variables of single private
#include<iostream>
using namespace std;
class alpha
{
    private:
    int frndVar1;
    int frndVar2;
    
    public:

  
    //or copy
    
      //defalutest
    alpha(){}   //use this wehn copyconstructor used only
                //allow to create copies
    alpha(int use1,int use2):frndVar1(use1),frndVar2(use2) {}
    

    
    friend void call_friend(alpha &anyVar);
    void display() //optional
    {
        cout<<"Your variables are "<<frndVar1<<" and "<<frndVar2;
    }
};

void call_friend(alpha &anyVar)
{
   //you need only one object for one class..no multiple in frnd func
    int x=anyVar.frndVar1+anyVar.frndVar2;
     
    cout<<x;
}
int main()
{    //create any umber of objects with copy constr
    alpha x,y,anyVar (10,20);   //x,y are multiple objcs
    alpha x1(anyVar);  // x1 has copied anyVar
    x1.display();

anyVar.display();

cout<<"\nYour FriendFucntion Calculation is ";
   call_friend(anyVar);
    return 0;
} 

