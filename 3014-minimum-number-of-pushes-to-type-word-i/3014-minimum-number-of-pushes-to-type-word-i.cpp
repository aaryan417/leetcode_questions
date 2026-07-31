class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char c : word) {
            freq[c - 'a']++;
        }

        // Sort frequencies in ascending order
        sort(freq.begin(), freq.end());

        int ans = 0;

        // Traverse from the largest frequency
        for (int i = 25; i >= 0 && freq[i] > 0; i--) {
            ans += freq[i] * ((25 - i) / 8 + 1);
        }

        return ans;
    }
};