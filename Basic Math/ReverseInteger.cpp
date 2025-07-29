#include <iostream>  // Include input/output stream library
using namespace std;  // Use standard namespace to avoid std:: prefix

// Define a class named 'Solution'
class Solution {
public:
    // Define a public method 'reverse' that takes an integer 'n' and returns its reversed value
    int reverse(int n) {
        // Use 'long long' to handle possible overflow during reversal
        long long revNum = 0;

        // Loop until all digits of 'n' are processed
        while (n != 0) {
            // Extract the last digit of 'n'
            int ld = n % 10;

            // Append the last digit to 'revNum' by shifting its digits left
            revNum = (revNum * 10) + ld;

            // Remove the last digit from 'n' (integer division by 10)
            n = n / 10;
        }

        // After reversal, check if 'revNum' is within 32-bit signed integer limits
        if (revNum > INT_MAX || revNum < INT_MIN)
            return 0;  // If overflow occurred, return 0 as per standard requirement

        // Safe to cast back to int and return
        return (int)revNum;
    }
};

// Entry point of the program
int main() {
    // Declare a variable 'n' to store user input
    int n;

    // Take integer input from the user
    cin >> n;

    // Create an object of class 'Solution'
    Solution sol;

    // Call the 'reverse' method and store the result
    int result = sol.reverse(n);

    // Output the reversed integer
    cout << result;

    // Indicate successful program termination
    return 0;
}