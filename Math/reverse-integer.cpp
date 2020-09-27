https://leetcode.com/problems/reverse-integer

/*
To explain, lets assume that \text{rev}rev is positive.
1. If temp = rev * 10 + pop causes overflow, then it must be that rev ≥ INT_MAX/10.
2. If rev> INT_MAX/10, then temp = rev * 10 + pop is guaranteed to overflow.
3. If rev == INT_MAX/10, then temp = rev * 10 + pop will overflow if and only if pop>7.
Similar logic can be applied when \text{rev}rev is negative.
*/

// if (rev > INT_MAX/10 || rev < INT_MIN/10) return false;
// This can also be used as an overflow condition



class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x) {
            int rem = x % 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && rem > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && rem < -8)) return 0;
            rev = (rev * 10) + rem;
            x /= 10;
        }
            return rev;
    }
};
