// Problem: Largest Element in Array
// Time: O(n) | Space: O(1)

class Solution {
public:
    int largest(vector<int>& arr) {
        int maxVal = arr[0];
        for (int x : arr) maxVal = max(maxVal, x);
        return maxVal;
    }
};
