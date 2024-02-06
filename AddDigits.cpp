#include <iostream>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) 
        {   int sum = 0;
            while (num > 0)
            {
                sum += num % 10;  //1.sum=8 
                num /= 10;        //num=3
            }
            num = sum;            //if num is >10 num=sum else not
        }
        return num;
    }
};

int main() {
    Solution solution;
    
    // Example 1
    int result1 = solution.addDigits(38);
    std::cout << "Example 1: " << result1 << std::endl;  // Output: 2

    // Example 2
    int result2 = solution.addDigits(0);
    std::cout << "Example 2: " << result2 << std::endl;  // Output: 0

    return 0;
}
