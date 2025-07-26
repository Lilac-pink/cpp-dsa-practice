class Solution {
public:
vector<int>binsr(std::vector<int>&nums,int i,int j,int target)
{   vector<int>r;
    
    if(i>j) 
    {
    r.push_back(-1);
    r.push_back(-1);
    return r;
    }
    while (i<=j)
    {
        int mid=(i+j)/2;
        if(nums[mid]==target)
        { vector<int> c;
        c.push_back(-1);
        c.push_back(-1);
          int m=mid+1;
          vector<int>a= binsr(nums,m,j,target);
          
          int n=mid-1;
          vector<int>b= binsr(nums,i,n,target);
          if(b==c) r.push_back(mid);
          else r.push_back(b[0]);

          if(a==c) r.push_back(mid);
          else r.push_back(a[1]);

          return r;
        }
        else if(nums[mid]<target)
        {
            i=mid+1;
            return binsr(nums,i,j,target);
        }
        else 
        {
            j=mid-1;
            return binsr(nums,i,j,target);
        }
    }
    return {-1,-1};
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        return binsr(nums,i,j,target);
    }
};