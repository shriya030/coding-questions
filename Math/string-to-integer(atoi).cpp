https://leetcode.com/problems/string-to-integer-atoi

/*
Handling overflow and underflow conditions:
If the integer is positive, for 32 bit signed integer, INT_MAX is 2147483647 (2^31 − 1). To avoid integer overflow, we must ensure that it doesn't exceed this value.
This condition needs to be handled when the result is greater than or equal to INT_MAX/10 (214748364)

Case 1: If result = INT_MAX/10, it would result in integer overflow if next integer character is greater than 7.
(7 in this case is last digit of INT_MAX(2147483647)). We can use INT_MAX % 10 to generically represent the last digit.

Case 2: If result > INT_MAX/10, we are sure that adding next number would result in integer overflow.
Similarly, This can be ysed for negative numbers also.
*/


class Solution {
public:
    int myAtoi(string str) {
        int sign = 1, num = 0, i = 0; 
        while (str[i] == ' ')
            i++;   
    if (str[i] == '-' || str[i] == '+') 
        sign = 1 * (str[i++] == '+');  
    while (str[i] >= '0' && str[i] <= '9') {  
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && str[i] - '0' > 7)) { 
            if (sign == 1) 
                return INT_MAX; 
            else
                return INT_MIN; 
        } 
        num = 10 * num + (str[i++] - '0'); 
    } 
    return num * sign; 
    }
};
