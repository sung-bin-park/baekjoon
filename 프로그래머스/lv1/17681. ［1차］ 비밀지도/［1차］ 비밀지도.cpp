#include <string>
#include <vector>
#include <bitset>
#include <iostream>
#include <algorithm>
using namespace std;

char result[16][16]={'2',};

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    for(int i=0;i<n;i++){
        bitset<16> bs1(arr1[i]);
        bitset<16> bs2(arr2[i]);
        
        string temp1=bs1.to_string();
        string temp2=bs2.to_string();
        
            for(int j=16-n;j<16;j++){
                if(temp1[j]=='0')
                    result[i][j-16+n]=' ';
                else
                    result[i][j-16+n]='#';
            }
        
            for(int j=16-n;j<16;j++){
                if(temp2[j]=='1')
                    result[i][j-16+n]='#';
            }
    }
    vector<string> answer;
    for(int i=0;i<n;i++){
        string s;
        for(int j=0;j<n;j++){
            s.push_back(result[i][j]);
        }
        answer.push_back(s);
    }
    return answer;
}