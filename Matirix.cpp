#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void matrix();
};

void Solution::matrix() {
    int m, n;
    cin >> m >> n;

   
    vector<vector<int>> matrix1(m, vector<int>(n));
    vector<vector<int>> matrix2(m, vector<int>(n));
    vector<vector<int>> result(m, vector<int>(n));

   
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

 
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

 
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Solution obj;
    obj.matrix();
    return 0;
}
