// Problem Link : - https://leetcode.com/problems/two-sum/
// Kartik Kumar 


class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }

        for(int i=0;i<nums.size();i++){
            int ele = target - nums[i];
            if(mp.find(ele) != mp.end() && i != mp[ele]) {
                ans.push_back(i);
                ans.push_back(mp[ele]);
                break;
            }
        }
        return ans;
    }
};

// method 2 

class Solution {
public:
vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
	unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
			result.push_back(hash[numberToFind]);
			result.push_back(i);			
			return result;
		}

            //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}


};
