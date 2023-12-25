#include <iostream>

using namespace std;

// Function to reverse the digits of an integer using recursion
int reverseDigits(int num, int reversed) {
    // Base case: when there are no more digits left
    if (num == 0) {
        return reversed;
    }

    // Extract the last digit
    int lastDigit = num % 10;

    // Append the last digit to the reversed number
    reversed = reversed * 10 + lastDigit;

    // Recursive call with the remaining digits
    return reverseDigits(num / 10, reversed);
}

int main() {
    int num;

    // Input from the user
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the input is negative and handle it accordingly
    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Exit with an error code
    }

    // Call the function to reverse the digits
    int reversed = reverseDigits(num, 0);

    // Output the reversed number
    cout << "Reversed number: " << reversed << endl;

    return 0; // Exit successfully
}
