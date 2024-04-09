class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int total = 0;

        for (int i = 0; i < tickets.size(); ++i) {
            if (i <= k) {
                total += min(tickets[i], tickets[k]);
            } else {
                total += min(tickets[i], tickets[k] - 1);
            }
        }

        return total;
    }
};


// int timeRequiredToBuy(vector<int>& t, int k) {
//     int res = 0, sz = t.size(), cap = t[k];
//     for (int i = 0; i < sz; ++i)
//         res += min(cap - (i > k), t[i]);
//     return res;
// }


//Java Code 

class Solution {
    public int timeRequiredToBuy(int[] tickets, int k){
        int n= tickets.length;
        int time=0;
    
        if(tickets[k]==1) return k+1;
        while(tickets[k]>0){
            for(int i=0;i<n;i++){
                if(tickets[i]==0) continue;
                tickets[i]=tickets[i]-1;
                time++;
                if(tickets[k]==0) break;
            }
        }k--;
        return time;
    }
}
