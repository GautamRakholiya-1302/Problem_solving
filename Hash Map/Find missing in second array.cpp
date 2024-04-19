class Solution{
	
	
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    unordered_set<int> st;
	    for(int i=0;i<m;i++)
	    st.insert(b[i]);
	    
	    vector<int> ans;
	    for(int i=0;i<n;i++)
	    {
	        if(st.count(a[i])==0)
	        ans.push_back(a[i]);
	    }
	    
	    return ans;// Your code goes here
	} 
};
// vector<int>ans;
//          bool present=0;
//         sort(b,b+5);
//       for(int i=0;i<6;i++)
//       {
//            int num=a[i];
//            int s=0;
//            int e=5-1;
//            int mid=(s+e)/2;
//            while(s<=e)
//            {
//                 present=0;
//                if(b[mid]==num)
//               {
//                   present=1;
//                   cout<<"number present"<<num<<"\n";
//                   break;
//               }
//               else if(num>b[mid])
//               {
//                   s=mid+1;
//               }
//               else
//               {
//                   e=mid-1;
//               }
//               mid=(s+e)/2;
//            }
//            if(present==0)
//            {
//               ans.push_back(num);
//            }
//       }
//       for(auto it:ans)
//       {
//         cout<<it<<" ";
//       }
//   }
