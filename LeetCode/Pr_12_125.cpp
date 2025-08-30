// 125. Valid Palindrome
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

 

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
 

// Constraints:

// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string normalize(string s) {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (isalnum(c)) {
                result += tolower(c);
            }
        }
        return result;
    }

    bool isPalindrome(string s) {
        string res = normalize(s);
        int start = 0;
        int end = res.size() - 1;

        while (start < end) {
            if (res[start] != res[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
