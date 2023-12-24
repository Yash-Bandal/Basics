#include <iostream>
using namespace std;
class geeks {
	int* p;
public:
	// default constructor
	geeks()
	{
        // allocating memory at run time
		// and initializing
		p = new int[3]{ 1, 2, 3 };  //int dyanamicarray=new int[size]{val};

		for (int i = 0; i < 3; i++) {
			cout << p[i] << " ";
		}

		cout << endl;
	}
};

int main()
{

	geeks* ptr = new geeks[1];  //MyClass* dynamicObject = new MyClass/[val];
} 
