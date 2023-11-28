int c=0;
        for(int i=0;i<V;i++)
        {
            for(auto x:adj[i])
            {
                c++;
            }
        }
        return c;
