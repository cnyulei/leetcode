/*leetcode 1486*/
class Solution {
public:
    int xorOperation(int n, int start) {
        int i = 0;
        int res = start;
        for (i = 1; i < n; i++)
        {
            res = res ^ (start + 2 * i);
        }

        return res;
    }
};