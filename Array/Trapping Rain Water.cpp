class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        int left[n];
        int right[n];

        left[0]=height[0];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);

        }
        right[n-1]=height[n-1];
        for(int j=n-2;j>=0;j--)
        {
            right[j]=max(right[j+1],height[j]);

        }
        int water[n];
        for(int i=0;i<n;i++)
        {
            water[i]=min(left[i],right[i])-height[i];


        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+water[i];

        }
        return sum;
    }
};
