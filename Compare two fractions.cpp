class Solution {
  public:
   string compareFrac( string s ) {
    const size_t p{ s.find( ',' )};
    string s1{ s.substr( 0, p )}, s2{ s.substr( p + 2 )};
    int l{ stoi( s1 ) * stoi( s2.substr( s2.find( '/' ) + 1 ))};
    int r{ stoi( s2 ) * stoi( s1.substr( s1.find( '/' ) + 1 ))};
    return l == r ? "equal" : l > r ? s1 : s2;
} 
};
