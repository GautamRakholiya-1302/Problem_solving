class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> v;
  int left = 0, right = 0;
  int ans = -1;

  // * Traverse text string only till the possible pattern string's length 
  while(left <= text.size() - pattern.size()) {
      
      // * If first char is SAME, then traverse remaining characters
      if(text[left] == pattern[right]){
        
          // * Store the idx temporarily, coz its a possible ans
          int idx = left;
          ans = left;
          
          // * Traverse till the characters are equal
          while(right < pattern.size() && text[idx] == pattern[right]){
              idx++;
              right++;
          }
          
          // * If traversed till the last index, Pattern is FOUND !
          if(right == pattern.size())
              v.push_back(ans+1);

          // * Reset Right Pointer    
          right = 0;
      }    
      left++;
  }
  
  return v;
            //code here.
        }
     
};
