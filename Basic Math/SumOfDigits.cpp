#include <iostream>
using namespace std;

// Function to calculate the sum of
// all digits of a given number
int sumOfDigits(int n) {
    // Initialize sum to 0
    int sum = 0;
    
    // Loop until all digits are processed
    while (n > 0) {
        // Extract the last digit
        int lastDigit = n % 10;
        
        // Add the last digit to sum
        sum += lastDigit;
        
        // Remove the last digit from n
        n = n / 10;
    }
    
    // Return the calculated sum
    return sum;
}

int main() {
    int number = 12345;
    int result = sumOfDigits(number);
    
    cout << "Sum of digits of " << number << " is: " << result << endl;
    
    return 0;
}
