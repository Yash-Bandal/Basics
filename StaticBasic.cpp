#include<iostream>
using namespace std;
class Alpha
{
private:
	int a;
	int b;
public:
	Alpha()
	{
		a = 5;
		b = 5;
	
	}

	static int stat;  //static data member

	static int getStat() //static member function
	{
		stat++;
		return stat;
	}
};
int Alpha::stat = 0;  //defination

int main()
{
	Alpha a1;
	//Alpha a2;
	cout << "Value using object a2(Member) " << a1.stat << endl;
    //	cout << "Value using object a2 " << a2.stat << endl;
    	
    	
	cout << "Value using object a1(Function) " << a1.getStat() << endl;
	//cout << "Value using object a2 " << a2.getStat() << endl;
	cout << "Value using class name " << Alpha::getStat() << endl;  //direct call without object def

	return 0;
}
