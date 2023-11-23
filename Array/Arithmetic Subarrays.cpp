class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int n=l.size();
        vector<bool>ans(n,true);
        vector<int>temp;
        temp=nums;

        for(int i=0;i<n;i++){
            int a=l[i];
            int b=r[i];
            sort(temp.begin()+a,temp.begin()+b+1);
            int q=temp[a+1]-temp[a];
            for(int j=a;j<b;j++){
                int yk=temp[j+1]-temp[j];
                if(yk!=q){
                    ans[i]=false;
                }
            }
            temp=nums;
        
        }
        return ans;
    }
};
