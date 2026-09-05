// Problem: Sum of Array
// Time: O(n) | Space: O(1)

class Solution {
public:
    int sumArray(vector<int>& arr) {
        int sum = 0;
        for (int x : arr) sum += x;
        return sum;
    }
};
