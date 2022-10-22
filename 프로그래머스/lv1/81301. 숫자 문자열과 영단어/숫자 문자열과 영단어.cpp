#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<int,string> data_set;

void set_data(){
    data_set.insert(make_pair(0,"zero"));
    data_set.insert(make_pair(1,"one"));
    data_set.insert(make_pair(2,"two"));
    data_set.insert(make_pair(3,"three"));
    data_set.insert(make_pair(4,"four"));
    data_set.insert(make_pair(5,"five"));
    data_set.insert(make_pair(6,"six"));
    data_set.insert(make_pair(7,"seven"));
    data_set.insert(make_pair(8,"eight"));
    data_set.insert(make_pair(9,"nine"));
}

int solution(string s) {
    set_data();
    
    //숫자 0-9 : 48~57, a-z : 97~122
    int answer = 0;
    string ss;
    string temp;
    for(int i=0;i<s.size();i++){
       
        if(s[i]>=48&&s[i]<=57){
            ss.push_back(s[i]);
        }//숫자일때
        
        else if(s[i]>=97&&s[i]<=122){
            temp.push_back(s[i]);
            
            for(int j=0;j<10;j++){
                if(temp.compare(data_set.find(j)->second)==0)//같다면
                {
                    ss.push_back(48+j);
                    temp.clear();
                    break;
                }
            }
        }//문자일때
    }
    for(int i=0;i<ss.size();i++){
        answer=answer*10+ss[i]-48;
    }
    
    return answer;
}