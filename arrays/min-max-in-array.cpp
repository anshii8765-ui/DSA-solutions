// Problem: Min and Max in Array
// Time: O(n) | Space: O(1)

class Solution {
public:
    pair<int,int> getMinMax(vector<int>& arr) {
        int mn = arr[0], mx = arr[0];
        for (int x : arr) {
            mn = min(mn, x);
            mx = max(mx, x);
        }
        return {mn, mx};
    }
};
