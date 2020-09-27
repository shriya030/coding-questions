https://leetcode.com/problems/palindrome-number/

// if (rev > INT_MAX/10 || rev < INT_MIN/10) return false;
// This can also be used as an overflow condition.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0)
            return true;
        if ( x < 0 || x % 10 == 0)
            return false;
        else {
            int rem, rev = 0, temp = x;
        while (x > 0) {
            rem = x % 10;
            // overflow condition
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && rem > 7)) return false;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && rem < -8)) return false;
            rev = (rev * 10) + rem;
            x /= 10;
        }
        return temp == rev;
        }
    }
};
