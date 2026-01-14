/*
Problem: Missing Number In Array1416
Difficulty: Easy
Tags: N/A
URL: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions
*/

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        long long total = (long long)n * (n + 1) / 2;
        long long sum = accumulate(arr.begin(), arr.end(), 0LL);
        return (int)(total - sum);
    }
};