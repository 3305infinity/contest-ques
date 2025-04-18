class Solution {
  public:
    // Function to find the longest increasing subsequence.
    vector<int> longestIncreasingSubsequence(int n, vector<int>& arr) {
        // Initializing dp array with 1.
        vector<int> dp(n, 1);
        // Initializing hash array with index values.
        vector<int> hash(n, 1);
        for (int i = 0; i <= n - 1; i++) {
            hash[i] = i; 
            // Checking previous elements for increasing subsequence.
            for (int prev_index = 0; prev_index <= i - 1; prev_index++) {
                // Updating dp and hash values if condition satisfies.
                if (arr[prev_index] < arr[i] && 1 + dp[prev_index] > dp[i]) {
                    dp[i] = 1 + dp[prev_index];
                    hash[i] = prev_index;
                }
            }
        }
        int ans = -1;
        int lastIndex = -1;
        // Finding the maximum length of increasing subsequence.
        for (int i = 0; i <= n - 1; i++) {
            if (dp[i] > ans) {
                ans = dp[i];
                lastIndex = i;
            }
        }
        vector<int> temp;
        temp.push_back(arr[lastIndex]);
        // Reconstructing the subsequence using hash array.
        while (hash[lastIndex] !=
               lastIndex) { // till not reach the initialization value
            lastIndex = hash[lastIndex];
            temp.push_back(arr[lastIndex]);
        }

        // Reversing the array to get the correct order.
        reverse(temp.begin(), temp.end());
        return temp;
    }
};
