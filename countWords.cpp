class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans = 0;
        unordered_map<string, int> freq1;
        unordered_map<string, int> freq2;
        for(const string& s : words1) {
            freq1[s]++;
        }
        for(const string& s : words2) {
            freq2[s]++;
        }
        for(const auto& p : freq1) {
            if(p.second == 1 && freq2[p.first] == 1) ans++;
        }
        return ans;
    }
};
