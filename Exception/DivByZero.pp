#include <iostream>

using namespace std;

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero";
    } else {
        return numerator / denominator;
    }
}

int main() {
    int num, den;

    try {
        cout << "Enter numerator and denominator: ";
        cin >> num >> den;

        int result = divide(num, den);
        cout << "Result: " << result << endl;
    } catch (const char* res) {
        cerr << "Exception caught: " << res << endl;
    }

    return 0;
}
