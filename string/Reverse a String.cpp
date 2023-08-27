class Solution
{
    public:
    string reverseWord(string str)
    {
        int i=0,j=str.size()-1;
    while(i<j){
        swap(str[i++],str[j--]);
    }
    return str;
    }
};
