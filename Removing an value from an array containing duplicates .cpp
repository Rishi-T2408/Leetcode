class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i=0;
        int j=0;
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
                nums[i]=nums[j]; //Better algorithm for removing an element in an array
                i++;
            }
        }
        return i;
    }
};