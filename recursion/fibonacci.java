// Problem: Fibonacci Series
// Recursive: O(2^n) | Iterative: O(n)

class Solution {
    // Recursive
    public int fibRecursive(int n) {
        if (n <= 1) return n;
        return fibRecursive(n-1) + fibRecursive(n-2);
    }

    // Iterative
    public int fibIterative(int n) {
        if (n <= 1) return n;
        int a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}
