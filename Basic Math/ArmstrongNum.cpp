#include <iostream> // Only include what you need
using namespace std;

// Function to check if a
// number is an Armstrong number
bool isArmstrong(int num) {
    // Calculate the number of
    // digits in the given number using division (efficient way)
    int k = 0, temp = num;
    while (temp > 0) {
        k++;
        temp = temp / 10;
    }

    // Initialize the sum of digits
    // raised to the power of k to 0
    int sum = 0;
    // Copy the value of the input
    // number to a temporary variable n
    int n = num;
    // Iterate through each
    // digit of the number
    while(n > 0){
        // Extract the last
        // digit of the number
        int ld = n % 10;
        // Compute digit raised to the power of k using integer multiplication
        int tempPow = 1;
        for (int i = 0; i < k; ++i) {
            tempPow *= ld;
        }
        // Add the digit raised to
        // the power of k to the sum
        sum += tempPow;

        // Remove the last digit
        // from the number
        n = n / 10;
    }
    // Check if the sum of digits raised to
    // the power of k equals the original number
    return sum == num; // Direct return, no ternary needed
}

int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}