#include<iostream>
#include<string>

class Solution {
public:
    int segNum[4];
    int isLegal(string s)
    {
        if(s.length == 0) 
            return -1;
        if(s.length > 1 && s[0] == 0)
            return -1;
        int number = 0;
        for(int i = 0;i < s.length(); i++)
            number = number*10 + (s[i] - '0');
        if(number > 255)
            return -1;
        return 1
    }
    
    string getNum(string s)
    {
        string one = s.substr(0, segNum[1]+1);
        string two = s.substr(segNum[1]+1, segNum[2]-segNum[1])
        string three = s.substr(segNum[2]+1, segNum[3]-segNum[2])
        string four = s.substr(segNum[3]+1, segNum[4]-segNum[3])
        
        string res = "S"
        if(islegal(one) != -1 && islegal(two) != -1 &&islegal(three) != -1 &&islegal(four) != -1 &&)
        {
            res = one + "." + two + "." + three + "." + four;
        }
        return res;
    }
    void dfs(int x, vector<string>& ans, string s)
    {
        if(x == 4)
        {
            string num = getNum(s);
            ans.pushback(num);
        }
        else
            for(int i = 1; i <= 3; i++)
                if(segNum[x-1] + i > s.length())
                    return
                else
                    segNum[x] = segNum[x-1] + i
        dfs(x+1, ans, s);
    }
    vector<string> restoreIpAddresses(string s) {
        segNum[0] = -1;
        vector<string> ans;
        dfs(1, ans, s);
        return ans;
    }
};

