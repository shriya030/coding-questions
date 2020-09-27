https://leetcode.com/problems/reverse-integer



class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x) {
            if (rev > INT_MAX / 10 ||rev < INT_MIN / 10)
                return 0;
            int rem = x % 10;
            rev = (rev * 10) + rem;
            x /= 10;
        }
            return rev;
    }
};
