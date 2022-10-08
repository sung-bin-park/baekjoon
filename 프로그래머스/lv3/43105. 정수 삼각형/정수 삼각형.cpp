#include <string>
#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    
    vector<vector<int>> dp=triangle;
    
    int sz=triangle.size();
    for(int i=sz-1; i>=1;i--){
        int index=triangle[i].size();
        for(int j=0;j<index-1;j++){
            int left = dp[i][j];
            int right = dp[i][j+1];
            if(left > right){
                dp[i-1][j]=triangle[i-1][j]+left;
            }
            else{
                dp[i-1][j]=triangle[i-1][j]+right;
            }
        }
    }
    
    int answer=dp[0][0];
    return answer;
}