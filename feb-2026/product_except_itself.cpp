#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> prefix;
    int initial = 1;
    for (int i = 0; i < nums.size(); i++) {
      prefix.push_back(initial);
      initial *= nums[i];
    }
    initial = 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
      prefix[i] *= initial;
      initial *= nums[i];
    }
    return prefix;
  }
  // 1, 1, 2, 6
  // 24   12   4   1
};
