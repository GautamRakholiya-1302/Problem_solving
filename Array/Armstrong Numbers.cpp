class Solution {
  public:
    string armstrongNumber(int n) {
       int ans = 0;
        int num = n;
        while(n!=0){
            int ld = n%10;
            ans = ans + (ld*ld)*ld;
            n = n/10;
        }
        if(ans==num)
            return "true";
        else
            return "false";
 // code here
    }
};
