// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Solution 
{
public:
    bool isPalindrome(int x)
    {
        if((x%10==0 && x!=0))
        {
            return false;
        }
       
           int  reversed=0;
            while(x>reversed)
            {
                reversed=reversed*10+x%10;
                x=x/10;
            }
            
        return x==reversed||x==reversed/10;
        
    }
};

int main()
{
    Solution solution;
    int x = 10;

    if (solution.isPalindrome(x))
    {
        cout << "Output: true" << endl;
    }
    else
    {
        cout << "Output: false" << endl;
    }

    return 0;
}
