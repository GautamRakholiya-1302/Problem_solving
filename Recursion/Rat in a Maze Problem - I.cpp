class Solution {
  public:
    void solve(int i,int j,vector<vector<int>>&mat,
        vector<vector<bool>>&vis,string &t,
        vector<string>&ans){
            if(i+1 == mat.size() && j+1 == mat[0].size()){
                if(t.length() >0) ans.push_back(t);
                return;
            }
            
            // left
            if(j>0 && mat[i][j-1]==1 && !vis[i][j-1]){
                vis[i][j-1]=1;
                t.push_back('L');
                solve(i,j-1,mat,vis,t,ans);
                t.pop_back();
                vis[i][j-1]=0;
            }
            // right
            if(j+1<mat[0].size() && mat[i][j+1]==1 && !vis[i][j+1]){
                vis[i][j+1]=1;
                t.push_back('R');
                solve(i,j+1,mat,vis,t,ans);
                t.pop_back();
                vis[i][j+1]=0;
            }
            // up
            if(i>0 && mat[i-1][j]==1 && !vis[i-1][j]){
                vis[i-1][j]=1;
                t.push_back('U');
                solve(i-1,j,mat,vis,t,ans);
                t.pop_back();
                vis[i-1][j]=0;
            }
            // down
            if(i+1<mat.size() && mat[i+1][j]==1 && !vis[i+1][j]){
                vis[i+1][j]=1;
                t.push_back('D');
                solve(i+1,j,mat,vis,t,ans);
                t.pop_back();
                vis[i+1][j]=0;
            }
        
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        if(mat[0][0]==0) return {};
        string t="";
        vector<string>ans;
        int n=mat.size(),m=mat[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        vis[0][0]=1;
        solve(0,0,mat,vis,t,ans);
        return ans;
    }
};
