#include <iostream>

using namespace std;

void Test(int value) {
    if (value > 0) {
        throw value;  // Throw an integer exception
    } else {
        throw static_cast<double>(value);  // Throw a double exception   //casting
    }
}

int main() {
    try 
    {
        cout << "Calling Test(1)" << endl;
        Test(1);    //>0
    } 
    catch (int intValue)
    {
        cout << "Caught an integer exception: " << intValue << endl;
    } 
    catch (double doubleValue) 
    {
        cout << "Caught a double exception: " << doubleValue << endl;
    }

    try 
    {
        cout << "Calling Test(-1)" << endl;
        Test(-1);  //<0
    } 
    catch (int intValue)   //imp line
    {
        cout << "Caught an integer exception: " << intValue << endl;
    }
    catch (double doubleValue) 
    {
        cout << "Caught a double exception: " << doubleValue << endl;
    }

    return 0;
}
