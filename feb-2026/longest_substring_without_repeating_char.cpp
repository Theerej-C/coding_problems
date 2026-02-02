#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> hash_map;
    int start = 0;
    int m = 0;
    for (int end = 0; end < s.size(); end++) {
      hash_map[s[end]]++;
      while (hash_map[s[end]] > 1) {
        hash_map[s[start]]--;
        if (hash_map[s[start]] == 0) {
          hash_map.erase(s[start]);
        }
        start++;
      }
      m = max(m, end - start + 1);
    }
    return m;
  }
};
