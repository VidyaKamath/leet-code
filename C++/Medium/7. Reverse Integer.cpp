class Solution {
public:
    int reverse(int x)
    {
        int rev = 0;
        int digit = 0;

        while(x != 0)
        {
            digit = x % 10;
            x = x / 10;

            if(rev > INT_MAX / 10 || rev < INT_MIN / 10)
            {
                return 0;
            }
            rev = rev * 10 + digit;
        }
        return rev;
    }
};
