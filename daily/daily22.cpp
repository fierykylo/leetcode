#include <bits/stdc++.h>
using namespace std;

//4th march 2026
//https://leetcode.com/problems/special-positions-in-a-binary-matrix/submissions/1937958758/?envType=daily-question&envId=2026-03-04

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> row(m, 0);
        vector<int> col(n, 0);

        // count 1s
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1){
                    row[i]++;
                    col[j]++;
                }
            }
        }

        int result = 0;

        // check special positions
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1 && row[i] == 1 && col[j] == 1){
                    result++;
                }
            }
        }

        return result;
    }
};