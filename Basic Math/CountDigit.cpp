#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> extractDigit(int N) { // function to extract the digits in the vector 
        vector<int> ans; // empty vector to store digits to push Int n       

        while (N > 0) {  // Runs until N becomes Zero 
            int lastDigit = N % 10;  // Gives you back last digits 
            ans.push_back(lastDigit); // Pushing the last Digit in vector ans in reverse 
            N = N / 10; // Removes the last digit  / Int div / chops off
        }

        reverse(ans.begin(), ans.end()); // fix order

        return ans; // return final vector containing Individual digits 
    }
};

int main() {
    Solution sol;
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    vector<int> digits = sol.extractDigit(number);
    
    cout << "Digits are: ";
    for(int digit : digits) {
        cout << digit << " ";
    }
    cout << endl;
    
    return 0;
}
