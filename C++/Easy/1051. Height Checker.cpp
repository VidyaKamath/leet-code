class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int> expected = heights;

        int count = 0;
        std::sort(expected.begin(), expected.end());

        for(int i = 0; i < expected.size(); i++)
        {
            if(expected[i]!= heights[i])
            {
            count++;
            }
        }
        return count;
    }
};
