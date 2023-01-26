class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> order_map(26, 0);
        unordered_map<char, int> count_map;
        string res = "";
        
        // Create a mapping of characters in order to their positions
        for (int i = 0; i < order.size(); i++) {
            order_map[order[i] - 'a'] = i;
        }
        // Create a mapping of characters to their counts in s
        for (char c : s) {
            count_map[c]++;
        }
        // Iterate through the order string
        for (char c : order) {
            if (count_map.count(c)) {
                // Add the character to the result string the number of times it appears in s
                res += string(count_map[c], c);
                count_map.erase(c);
            }
        }
        // Add any remaining characters in s to the result string
        for (auto [c, count] : count_map) {
            res += string(count, c);
        }
        return res;
    }
};