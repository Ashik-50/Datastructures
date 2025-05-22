#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    // Approach 1: Using two maps
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;
        
        for (int i = 0; i < s.length(); i++) {
            // If current character of s is already mapped
            if (s_to_t.count(s[i])) {
                // Check if it maps to the same character in t
                if (s_to_t[s[i]] != t[i]) return false;
            }
            // If current character of t is already mapped
            else if (t_to_s.count(t[i])) {
                // Check if it maps to the same character in s
                if (t_to_s[t[i]] != s[i]) return false;
            }
            // Create new mapping
            else {
                s_to_t[s[i]] = t[i];
                t_to_s[t[i]] = s[i];
            }
        }
        return true;
    }
    
    // Approach 2: Using character indexing
    bool isIsomorphic2(string s, string t) {
        vector<int> s_first_pos(256, -1);
        vector<int> t_first_pos(256, -1);
        
        for (int i = 0; i < s.length(); i++) {
            // If first occurrence positions don't match, strings aren't isomorphic
            if (s_first_pos[s[i]] != t_first_pos[t[i]]) {
                return false;
            }
            // Mark current position as first occurrence for both characters
            s_first_pos[s[i]] = i;
            t_first_pos[t[i]] = i;
        }
        return true;
    }
}; 