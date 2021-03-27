class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Sorting it first
        int n=nums.size();
        std::sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};