class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);

        vector<int> pair2 = pairs[0];

        int cnt=1;

        for(int i=1;i<pairs.size();i++){
            if(pairs[i][0]>pair2[1]){
                cnt++;
                pair2 = pairs[i];
            }
        }

        return cnt;
    }
};
