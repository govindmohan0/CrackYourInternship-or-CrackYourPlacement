
//Dutch National Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, mid = 0;
        while (mid <= high) {//Dutch National Flag Algo
            if (nums[mid] == 0)
                swap(nums[low++], nums[mid++]);
            else if (nums[mid] == 1)
                mid++;
            else
                swap(nums[high--], nums[mid]);
        }
    }
};