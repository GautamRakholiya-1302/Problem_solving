class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        vector<pair<int, char>> v;
        string ans = "";

        // count character frequency
        for(auto ch: s){
            mp[ch]++;
        }

        // push from map to vector 
        for(auto i: mp){
            v.push_back({i.second, i.first});
        }
        cout << "================: ";
        for(auto i: v){
            cout << "(((" << i.first << ", " << i.second << "))) ";
        }

        // sort the vector in decreasing order
        sort(v.begin(), v.end(), greater<pair<int, char>>());

        cout << "Contents of vector v: ";
        for(auto i: v){
            cout << "(" << i.first << ", " << i.second << ") ";
        }
        cout << endl; 
        // add to final answer string
        for(auto i: v){
            while(i.first--) ans += i.second;
        }
        return ans;
    }
};
