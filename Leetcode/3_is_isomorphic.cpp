// https://leetcode.com/problems/isomorphic-strings/description/?envType=study-plan&id=level-1
//2/19/2023
#include <string>
#include <vector>
class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        char map_s[256] = {0}, map_t[256] = {0};
        char s_index, t_index; 
        if(s.size() == t.size()) {
            for(size_t i = 0; i < s.size(); i++) {
                if(map_s[s[i]] && map_s[s[i]] != t[i])
                    return false; 
                if(map_t[t[i]] && map_t[t[i]] != s[i])
                    return false; 
                map_s[s[i]] = t[i];
                map_t[t[i]] = s[i]; 
            } 
        return true; 
        }
        return false; 
    }

};