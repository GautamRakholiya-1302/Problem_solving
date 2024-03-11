class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	     unordered_multiset<int>Set;
	    int cnt = 0;
	    for(int i = 0; i < mat2.size();i++){
	        for(int j = 0; j < mat2.size();j++){
	            Set.insert(mat2[i][j]);
	        }
	    }
	     for(int i = 0; i < mat1.size();i++){
	        for(int j = 0; j < mat1.size();j++){
	            if(Set.find(x - mat1[i][j]) != Set.end())
	             cnt++;
	        }
	    }
	    return cnt;
	}
};
