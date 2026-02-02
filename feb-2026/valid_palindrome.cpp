#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    string res = "";
    for (char c : s) {
      if (isalnum(c)) {
        res += tolower(c);
      }
    }
    int start = 0;
    int end = res.size() - 1;
    cout << res;
    while (start <= end) {
      if (res[start] != res[end]) {
        return false;
      }
      start++;
      end--;
    }
    return true;
  }
};
