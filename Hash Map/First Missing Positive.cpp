class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
           // sort(nums.begin(),nums.end());
            int n=nums.size();
            for(int i=0;i<n;i++)
            {
                int element=nums[i];
                 if (element == INT_MIN) {
                continue;
            }
                int chair=element -1;

                if(element>=1 && element<=n)
                {
                    if(nums[chair]!=element)
                    {
                        swap(nums[chair],nums[i]);
                        i--;
                    }
                }
            }
            for(int i=0;i<nums.size();i++)
            {
                if(i+1!=nums[i])
                {
                    return i+1;
                }
            }
            return n+1;   
    }
};
