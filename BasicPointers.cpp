//🎆🎁🎄MERRY CHRISTMAS🎄🎁🎆
//Pointers use object
//use 2 variables of single private
#include<iostream>
using namespace std;
class alpha
{
    private:
    int frndVar1;
    int frndVar2;
    
    public:

     alpha()  //constructor 0 important 
    {
        frndVar1=10;
        frndVar2=20;
    }
    alpha(int use1,int use2):frndVar1(use1),frndVar2(use2) {}
    
    friend void call_friend(alpha &anyVar);
    void display() 
    {
        cout<<"Your variables are "<<frndVar1<<" and "<<frndVar2<<endl;
    }
};

void call_friend(alpha &anyVar)
{
    int x=anyVar.frndVar1+anyVar.frndVar2;
    cout<<x;
}
int main()
{
    alpha *ptr=new alpha;
    alpha anyVar(10,20);
   // alpha *ptr;
   ptr=&anyVar;
   
anyVar.display();
(*ptr).display();
ptr->display();

    alpha *ptr1=new alpha[6];
    alpha anyVar2(20,40);
    ptr1=&anyVar2;
    ptr1->display();


cout<<"\nYour FriendFucntion Calculation is ";
   call_friend(anyVar);
    return 0;
} 


//________________________________________________________________________________________________________________________________-
//pointer to object
//pointer that stores address of object

#include <iostream>

using namespace std;

class Base 
{
protected:
    int num1, num2;

public:
    void getNum() {
        cout << "Enter two Numbers: ";
        cin >> num1 >> num2;
    }
};

class Derived : public Base {
public:
    void calculateSum() {
        int sum = num1 + num2;
        cout << "Sum of the Numbers: " << sum << endl;
    }
};

int main() {
    Base objbase;
    Derived objder;
    
    Base *bptr=new Base;  //pointer of base
    bptr=&objbase;
    
   
   
    Derived *dptr=new Derived; //pointer of derived
    dptr=&objder;
    
    dptr->getNum();    //derived pointer inherita=s base 
    dptr->calculateSum(); //derived pointer inherits derived
    
    return 0;
}

//Base pointing derived class
//use virtual functions in this case

//pointer to object
//pointer that stores address of object

#include <iostream>
using namespace std;

class Base 
{
protected:
    int num1, num2;

public:
    void getNum() {
        cout << "Enter two Numbers: ";
        cin >> num1 >> num2;
    }
    
    virtual void calculateSum()
    {
        cout<<"The sum is in derived..this is just seen by you..will never be displayed"<<endl;
    }
};

class Derived : public Base {
public:
    void calculateSum() override  //override vimp jargonizatonwordoftheyearintheppofjspm🎁
    {
        int sum = num1 + num2;
        cout << "Sum of the Numbers: " << sum << endl;
    }
};

int main() {
Base *bptr=new Base;
Base baseobj;
Derived derobj;

bptr=&derobj;
bptr->getNum();
bptr->calculateSum();
    return 0;
} 


//pointers to derived class/inheritance

