// Day 4: Valid Palindrome
// Time: O(n), Space: O(1)

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        
        while (left < right) {
            while (left < right && !isalnum(s[left])) ++left;   // skip non-alphanum
            while (left < right && !isalnum(s[right])) --right; // skip non-alphanum
            
            if (tolower(s[left]) != tolower(s[right])) return false;
            ++left;
            --right;
        }
        
        return true;
    }
};
