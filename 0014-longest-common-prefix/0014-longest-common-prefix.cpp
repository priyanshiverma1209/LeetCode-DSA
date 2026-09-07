class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
        return "";
        }
        string base=strs[0];
        for(int i=0;i<base.length();i++)
        {
            for(int words=1;words<strs.size();words++)
            {
                if(i==strs[words].length() || base[i]!=strs[words][i]){
                    return base.substr(0,i);
                }
            }
        }
        return base;
    }
};