// Problem: https://leetcode.com/problems/fibonacci-number/
// Level: Easy

#include<iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n > 1) {
            return (fib(n-1) + fib(n-2));
        }
        else return 0;
    }
};