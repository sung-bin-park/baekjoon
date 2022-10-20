#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string X, string Y) {//0 : 48 9: 57
    int check_x[10]={0,};
    int check_y[10]={0,};
    int result[10]={0,};
    int x_size=X.size();
    int y_size=Y.size();
    for(int i=0;i<x_size;i++)check_x[X[i]-48]++;
    for(int i=0;i<y_size;i++)check_y[Y[i]-48]++;
    for(int i=0;i<10;i++){
        if(check_x[i]&&check_y[i]){
            if(check_x[i]>=check_y[i])
                for(int j=0;j<check_y[i];j++)
                    result[i]++;
            else for(int j=0;j<check_x[i];j++)
                result[i]++;
        }
    }
    int sum=0;
    for(int i=0;i<10;i++){
        if(check_x[i]==0||check_y[i]==0)continue;
        else sum++;
    }
    string answer;
    if(sum)
        for(int i=9;i>=0;i--){
            if(i==0&&answer.size()==0)answer="0";
            else
            for(int j=0;j<result[i];j++)answer.push_back(i+48);
    }
    else answer="-1";
    return answer;
}