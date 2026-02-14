#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int color) {
    if (color == image[sr][sc]) {
      return image;
    }
    vector<vector<int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    recursion(image, sr, sc, dir, color, image[sr][sc]);
    return image;
  }
  void recursion(vector<vector<int>> &image, int i, int j,
                 vector<vector<int>> &dir, int color, int org) {
    image[i][j] = color;
    // cout << color;
    for (auto d : dir) {
      int row = i + d[0];
      int col = j + d[1];
      if (row >= 0 && row < image.size() && col >= 0 && col < image[0].size() &&
          image[row][col] == org) {
        recursion(image, row, col, dir, color, org);
      }
    }
  }
};
