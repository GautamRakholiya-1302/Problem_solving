class Solution {
  public:
    int swapNibbles(int n) {
           int val = n%16; // Obtained the last 4 bits
        val = val<<4; // Shifted Them by 4 bits leftwards
        int jump = n>>4; // Obtained the first 4 bits by shifting
        val+=jump; // Added Those 4 bits
        return val;// code here
    }
};
