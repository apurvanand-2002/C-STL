class Solution
{
private:
    bool isEqual(int A[26], int B[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (A[i] != B[i])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2)
    {
        int count1[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            char c = s1[i];
            c = c - 'a';
            count1[c]++;
        }
        int WindowSize = s1.length();
        int count2[26] = {0};
        int i = 0;
        // starting the sliding window.
        while (i < WindowSize && i < s2.length())
        {
            char c = s2[i];
            c = c - 'a';
            count2[c]++;
            i++;
        }
        if (isEqual(count1, count2))
        {
            return true;
        }
        // Moving the window.
        while (i < s2.length())
        {
            char c = s2[i];
            c = c - 'a';
            count2[c]++;

            char k = s2[i - WindowSize];
            k = k - 'a';
            count2[k]--;
            if (isEqual(count1, count2))
            {
                return true;
            }
            i++;
        }
        return false;
    }
};