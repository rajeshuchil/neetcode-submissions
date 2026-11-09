class Solution {
public:
    int minOperations(string s) {
        int pattern1 = 0;
        int pattern2 = 0;

        for (int i=0;i< s.size();i++)
        {
            char expected1 = (i%2 == 0)? '0': '1';
            char expected2 = (i%2 ==0)? '1' : '0';

            if(s[i] != expected1)
                pattern1++;

            if(s[i] != expected2)
                pattern2++;
        }
        retrun min(pattern1 )
    }
};