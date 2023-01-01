class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int i = 0;
        int fsindex = 0;
        int n = chars.size();

        while (i < n)
        {
            int j = (i + 1);
            while (j < n && chars[j] == chars[i])
            {
                j++;
            }
            int count = (j - i);
            chars[fsindex] = chars[i];
            fsindex++;
            if (count > 1)
            {
                string counter = to_string(count);
                for (char ch : counter)
                {
                    chars[fsindex] = ch;
                    fsindex++;
                }
            }
            i = j;
        }
        return fsindex;
    }
};