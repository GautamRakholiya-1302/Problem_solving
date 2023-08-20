class Solution
{
public:
    void solve(int index,int sum, vector<int>&nums,vector<int>&ans,int n)
    {
        if(index==n)
        {
            ans.push_back(sum);
            return;
        }
        //Pick the Element
        solve(index+1,sum+nums[index],nums,ans,n);
        // Not Pick the Element Just Increase Index
        solve(index+1,sum,nums,ans,n);
        
    }
    vector<int> subsetSums(vector<int> nums, int n)
    {
        vector<int>ans;
        solve(0,0,nums,ans,n);
        sort(nums.begin(),nums.end());
        return ans;
    }
};
