/*
Problem: Search An Element In An Array 1587115621
Difficulty: Easy
Tags: N/A
URL: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty=Basic&sortBy=submissions
*/

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int n = arr.size(), res = -1;
        vector<int>::iterator it = find(arr.begin(), arr.end(), x);
        if (it != arr.end()) {
            res = distance(arr.begin(), it);
        }
        return res;
    }
};