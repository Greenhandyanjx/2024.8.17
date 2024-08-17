#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = n / 2 - 1;
        for (int i = 0; i <= m; i++) swap(matrix[i], matrix[n - 1 - i]);
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
//class Solution {
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        int row = matrix.size();
//        int col = matrix[0].size();
//        for (int i = 0; i < matrix.size()/2; i++) {
//            for (int j = 0; j < matrix[0].size() - 2 * i; j++) {
//                int cur = matrix[0].size() - 2*i;
//                int temp1 = matrix[i][j];
//                matrix[i][j] = matrix[row - j - 1][i];
//                int temp2 = matrix[i][row - 1 - j];
//                matrix[i][row - 1 - j] = temp1;
//                temp1 = matrix[row - 1 - i][row - 1 - j];
//                matrix[row - 1 - i][row - 1 - j] = temp2;
//                matrix[row - 1 - i][j] = temp1;
//            }
//        }
//    }
//};