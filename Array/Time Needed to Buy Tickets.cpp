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


int timeRequiredToBuy(vector<int>& t, int k) {
    int res = 0, sz = t.size(), cap = t[k];
    for (int i = 0; i < sz; ++i)
        res += min(cap - (i > k), t[i]);
    return res;
}
