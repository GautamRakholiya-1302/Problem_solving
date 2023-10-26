class Solution
{
  public:
    int minOperation(int n)
    {
       int c=0;
        while(n){
            if(n%2!=0)  
                n--;  
            else
                n/=2;
            c++;
        }
        return c; //code here.
    }
};
