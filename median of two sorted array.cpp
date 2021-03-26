class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double d;
        int *C;
        C = new int[nums1.size()+nums2.size()];
        int i=0,j=0,k=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                C[k++]=nums1[i++];
            }
            else if(nums1[i]>nums2[j])
            {
                C[k++]=nums2[j++];
            }
            else{
                 C[k++]=nums1[i++];
                C[k++]=nums2[j++];
            }
        }
        for(;i<nums1.size();i++)
        {
              C[k++]=nums1[i];   
        }
        for(;j<nums2.size();j++)
        {
              C[k++]=nums2[j];   
        }
        //Now as we have merged the array now printing the median
        
        if(k%2==0){
            d = ((float(C[(k/2)-1])+C[(k/2)])/2.00000);
        }
        else{
            d=C[k/2];
        }
        
        return d;
        
    }
};