int Solution::solve(vector<string> &A)
{
    int n = A.size();
    int m = A[0].size();
    int s = 0;
    int e = 0;
    int max_length = 0;
    char str = '\0';
    char end = '\0';
    int j = 0;
    while (j < m)
    {

        str = A[s][j];
        for (int i = 1; i < n; i++)
        {
            if (A[i][j] != str)
            {
                int temp = i - s + 1;
                if (temp > max_length)
                {
                    max_length = temp;
                    end = A[i][j];
                    e = j;
                }
            }
        }
        j++;
    }
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        for (int g = 0; g < m; g++)
        {
            if (A[i][g] != str && A[i][g] != end && g != e)
            {
                h = max(h, (g - e + 1));
            }
        }
    }
    long double ans = (h * max_length) / 2;

    return ceil(ans);
}