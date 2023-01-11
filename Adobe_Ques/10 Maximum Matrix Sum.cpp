class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int neg = 0;
        long long int sum = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] < 0)
                    neg++;
                sum += abs(matrix[i][j]);
                mini = min(mini, abs(matrix[i][j]));
            }
        }
        return sum - (neg % 2 == 0 ? 0 : 2 * mini);
    }
};