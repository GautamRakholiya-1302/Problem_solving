class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int n = words.size();
        int i = 0;

        while (i < n)
        {
            int len = 0;
            int start = i;

            while (i < n and len + words[i].length() + (i - start) <= maxWidth) 
            {
                len += words[i].length();
                i++;
            }

            int numWords = i - start;

            string line = words[start];
            int spaces = maxWidth - len;

            if (numWords > 1 and i < n) 
            {  
                int spacesPerWord = spaces / (numWords - 1);
                int extraSpaces = spaces % (numWords - 1);

                for (int j = start + 1; j < i; j++) 
                {
                    line.append(spacesPerWord, ' ');

                    if (extraSpaces > 0) {
                        line.append(" ");
                        extraSpaces--;
                    }

                    line.append(words[j]);
                }
            }
            else 
            {   
                for (int j = start + 1; j < i; j++) 
                {
                    line.append(" ");
                    line.append(words[j]);
                }
                line.append(maxWidth - line.length(), ' ');
            }
            ans.push_back(line);
        }

        return ans;
    }
};
