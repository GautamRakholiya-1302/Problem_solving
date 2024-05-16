
class Solution {
public:
	int dfs(int parent ,int node ,vector<int>adj[] , int &ans){
    int count =0 ;
    for(auto it:adj[node]){
        if(it!=parent){
            //counting the nodes in the subtree of that node 
            count += dfs(node , it,adj,ans) ;
        }
    }
    count ++ ;// for counting the self node
    if(count%2==0 and node!=1){ 
    // increment the cutting value(ans) but if that is for root node then dont increment it 
        ans++ ;
        count=0;//make the count of subtree for that node 0 , as it is cut from its parent
    }
    // cout << node << " " << count << endl ;
    return count ;
}
    int minimumEdgeRemove(int n, vector<vector<int>>edges){
        // Code here
        vector<int>adj[n+1] ;
        for(auto it:edges){
            adj[it[0]].push_back(it[1]) ;
            adj[it[1]].push_back(it[0]) ;
        }
        int ans=0 ;
        dfs(-1 ,1, adj,ans) ;
        return ans ; // Code here
	}
};
