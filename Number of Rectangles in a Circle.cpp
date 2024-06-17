class Solution {
  public:
   int rectanglesInCircle(int R) {
        // code here
        int l=1,b=1,cnt=0;
        // cin>>r;
        while(l*l+b*b<=4*R*R){
            while(l*l+b*b<=4*R*R){
                cnt++;
                b++;
            }
            l++;
            b=1;
        }
        return cnt;
    }
};
