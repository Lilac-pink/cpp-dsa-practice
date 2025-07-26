int binarysearch(std::vector<int>&nums,int i,int j,int target)
{   if(i>j) return -1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target)
        {
            j=mid-1;
            return binarysearch(nums,i,j,target);
        }
        else 
        {
            i=mid+1;
            return binarysearch(nums,i,j,target);
        }
    }
}
int search(vector<int> &nums, int target) 
{   
    int i=0,j=nums.size()-1;
    int a=binarysearch(nums,i,j,target);
    return a;
}