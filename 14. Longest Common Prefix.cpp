// Problem Link : https://leetcode.com/problems/longest-common-prefix/
// Kartik Kumar

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Sort the string array
        sort(strs.begin(), strs.end());
        int len = strs.size();
        // taking first and last element of strs array
       // because we sorted the array so if we compare
       // first and last string and they are same then between string 
      // also have same characters. 
        string n = strs[0], m = strs[len-1], ans = "";
        for(int i=0;i<n.size();i++){
            if(n[i] == m[i]) ans += n[i];
            else break;
        }
        return ans;
        
    }
};
