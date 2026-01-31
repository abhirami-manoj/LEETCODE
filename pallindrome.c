bool isPalindrome(int x) {
        // Base cases: 
        // 1. Negative numbers are not palindromes.
        // 2. Numbers ending in 0 (except 0 itself) are not palindromes.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // When the length is odd, we can get rid of the middle digit by revertedNumber/10
        // For example, for 121: at the end of loop x = 1, revertedNumber = 12.
        // Since the middle digit doesn't matter for palindrome, we check x == revertedNumber/10
        return x == revertedNumber || x == revertedNumber / 10;
    }
};
