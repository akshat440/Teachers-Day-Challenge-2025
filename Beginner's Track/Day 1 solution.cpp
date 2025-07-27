#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countDigits(int num) {
        if (num == 0) return 1;

        int digits = 0;
        while (num > 0) {
            num /= 10;
            digits++;
        }
        return digits;
    }

    int findNumbers(vector<int>& nums) {
        int evenCount = 0;
        for (int num : nums) {
            if (countDigits(num) % 2 == 0) {
                evenCount++;
            }
        }
        return evenCount;
    }
};
