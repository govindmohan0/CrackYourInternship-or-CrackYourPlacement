class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mapp;
       for(int i=0;i<nums.size();i++){
        int complement=target-nums[i];
        if(mapp.count(complement)){
            return {i,mapp[complement]};
        }
        else{
        mapp[nums[i]]=i;
        }
       }
       return {-1,-1};
    }
};