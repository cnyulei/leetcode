/*1486. ����������*/
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

/*1480. һά����Ķ�̬��*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int res = 0;
        int i = 0;

        for(i = 0; i < nums.size() - 1; i++)
        {
            nums[i+1] += nums[i];
        }

        return nums;
    }
};