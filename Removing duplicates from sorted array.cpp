class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //If there is an empty array then we should return 0
        if(nums.size()==0)
            return 0;
       int i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=nums[i])
        {
            i++;  //Jisse jitne bhi duplicates hai uske ekhh value tohh rhe
            nums[i]=nums[j];
        }  //j will ignore the duplicates and will trap an value which is new 
        //Then when an value different from present element duplicare is found then i will increament and then 
    }
    //Then i will point to the last index
    return (i+1); 
    }
};