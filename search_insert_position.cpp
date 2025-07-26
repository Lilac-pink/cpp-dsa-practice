class Solution {
public:
    int find(std::vector<int>nums,int i,int j,int target)
    {
        if(i>j) 
        {   
            if(target<nums[0]) return 0;
            int k=nums.size()-1;
            if(target>nums[k]) return k+1;
            if(!(target<nums[0])&&!(target>nums[k]))
            {
                return i;
            }
           
        }
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) return find(nums,mid+1,j,target);
            else return find(nums,i,mid-1,target);
        }
        return -1;
    }
    int searchInsert(vector<int>& nums, int target) {
        int l=nums.size()-1;
        int i=0;
        return find(nums,i,l,target);
    }
};