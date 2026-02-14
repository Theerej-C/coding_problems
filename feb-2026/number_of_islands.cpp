#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int numIslands(vector<vector<char>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == '1') {
          recursion(i, j, grid, dir);
          count++;
        }
      }
    }
    return count;
  }
  void recursion(int i, int j, vector<vector<char>> &grid,
                 vector<vector<int>> &dir) {
    grid[i][j] = '2';
    for (auto d : dir) {
      int row = i + d[0];
      int col = j + d[1];
      if (row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size()) {
        if (grid[row][col] == '1') {
          recursion(row, col, grid, dir);
        }
      }
    }
  }
};
