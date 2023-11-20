class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int count=0;
        int glass=0;
        int pep=0;
        int met=0;
        for(int i=0;i<garbage.size();i++)
        {
            for(auto it:garbage[i] )
            {
                if(it=='M')
                {
                    met=i;
                }
                else if(it=='P')
                {
                    pep=i;
                }
                else
                {
                    glass=i;
                }
                count++;
            }

        }
        int ans=count;
        int sum=0;

        for(int i=0;i<travel.size();i++)
        {
            sum+=travel[i];
            if(glass==i+1)
            {
                ans+=sum;
            }
            if(pep==i+1)
            {
                ans+=sum;
            }
            if(met==i+1)
            {
                ans+=sum;
            }
        }
        return ans;

        
    }
};
