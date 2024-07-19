class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(auto it:nums){
           int index=abs(it);
            if(nums[index]<0){
                return index;
            }
            nums[index]*=-1;
        }
        return -1;
    }
};