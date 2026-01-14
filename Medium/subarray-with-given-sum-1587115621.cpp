/*
Problem: Subarray With Given Sum 1587115621
Difficulty: Medium
Tags: N/A
URL: https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions
*/

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
    int n = arr.size();
    int l = 0;
    long long currentSum = 0;

    for (int r = 0; r < n; r++) {
        currentSum += arr[r];

        while (currentSum > target && l <= r) {
            currentSum -= arr[l];
            l++;
        }

        if (currentSum == target) {
            return {l + 1, r + 1}; // 1-based indexing
        }
    }

    return {-1};
}

};
