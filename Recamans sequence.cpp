class Solution{
public:
    vector<int> recamanSequence(int n){
        unordered_map<int,int>hmap;
        hmap[0]++;
        vector<int>temp(n);
        temp[0]=0;
        for(int i=1;i<n;i++){
            int k=temp[i-1]-i;
            if(k>0 and hmap.find(k)==hmap.end()){
                temp[i]=k;
                hmap[k]++;
            }
            else{
                temp[i]=temp[i-1]+i;
                hmap[temp[i-1]+i]++;
            }
        }
        return temp;
    }
};
