class Solution {
public:
    int beautySum(string s) {
       int n = s.size();
        int totalBeauty = 0;
        for (int i = 0; i < n; i++) {
            int freq[26] = {0}; 
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
 
 int maxFreq = 0;
  int minFreq = INT_MAX;
        for (int f = 0; f < 26; f++) {
        if (freq[f] > 0) {
        maxFreq = max(maxFreq, freq[f]);
      minFreq = min(minFreq, freq[f]);
                    }
} totalBeauty += (maxFreq - minFreq);
            }
        }
         return totalBeauty;
    }
};