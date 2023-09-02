class Solution {
public:
    static bool  functionsort(vector<int>&a,vector<int> &b)
    {
        return a[1]>b[1];

    }
    int maximumUnits(vector<vector<int>>& boxs, int truckSize) {
        sort(boxs.begin(),boxs.end(),functionsort);
        int ans=0;
        for(auto box : boxs)
        {
            int x=min(box[0],truckSize);
            ans=ans+(x*box[1]);
            truckSize=truckSize-x;
            if(!truckSize)
            {
                break;
            }

        }
        return ans;
        
        
    }
};
