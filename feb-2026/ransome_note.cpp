#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> hm1;
    unordered_map<char, int> hm2;
    for (char c : ransomNote) {
      hm1[c]++;
    }
    for (char c : magazine) {
      hm2[c]++;
    }
    for (auto &h : hm1) {
      if (hm2[h.first] < h.second) {
        return false;
      }
    }
    return true;
  }
};
