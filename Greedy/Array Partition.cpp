class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;

        int n=nums.size();

        for(int i=0;i<n;i=i+2)
        {
            maxi=maxi+min(nums[i],nums[i+1]);

        }
        return maxi;

        
    }
};
