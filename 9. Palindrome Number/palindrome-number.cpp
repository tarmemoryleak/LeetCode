class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long reversed = 0;
        int tar = x; // x = 121 
        while (tar != 0){
        reversed = (reversed * 10) + (tar % 10); 
        tar /= 10;
        }

        return reversed == x;
    }
};
