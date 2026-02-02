#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (t.size() != s.size()) {
      return false;
    }
    unordered_map<char, int> hm1;
    unordered_map<char, int> hm2;
    for (char c : s) {
      hm1[c]++;
    }
    for (char c : t) {
      hm2[c]++;
    }
    for (auto &h : hm1) {
      if (hm2[h.first] != h.second) {
        return false;
      }
    }
    return true;
  }
};
