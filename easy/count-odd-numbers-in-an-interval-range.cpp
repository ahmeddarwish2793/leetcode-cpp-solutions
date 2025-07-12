// Problem: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
// Level: Easy

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        if(low < 0 || high < 0) return 0;
        for(int i = low; i <= high; i++) {
            if(i%2 != 0) count +=1;
        }
        return count;
    }
};