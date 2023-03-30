// Problem link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
// kartik kumar

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();
        int i=0, j=0;
        int start = 0;

        while(i < n1 && j < n2){
            if(haystack[i] == needle[j]){
                if(i-start+1 == n2){
                    return start;
                }
                i++;
                j++;
            }else{
                j=0;
                start++;
                i=start;
            }
        }
        return -1;
        
    }
};
