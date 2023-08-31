class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0,mid;
        int n=nums.size();
        int high=n-1;
        mid= low+(high-low)/2;
        while(low<=high)
        {
            if(nums[mid] == target)
            {
                return mid;

            }
           
           if(nums[mid]>=nums[low])
           {
               if(nums[mid]>=target && target>=nums[low])
               {
                   high=mid-1;

               }
               else
               {
                   low =mid+1;

               }
           }
           else if(nums[mid]<=nums[low])
           {
               if(nums[mid]<=target && target<=nums[high])
               {
                   low=mid+1;

               }
               else{
                   high=mid-1;
                   
               }
           }
           mid= low+(high-low)/2;

        }
        return -1;

    }
};
