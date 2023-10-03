
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>count(101,0);
        int n=nums.size();
        int ans=0;


        for(auto &num:nums)
        {
            ans=ans+count[num];
            count[num]++;
        }
        return ans;

    }
};
