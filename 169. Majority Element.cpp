class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                elem = nums[i];
            }
            if (nums[i] == elem) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int cnter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == elem) {
                cnter++;
            }
        }
        return (cnter >= nums.size() / 2) ? elem : -1;
    }
};