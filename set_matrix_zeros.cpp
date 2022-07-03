void setZeros(vector<vector<int>> &mat)
{
    // Write your code here.
    int R = mat.size();
    int C = mat[0].size();
    bool row = false;
    bool col = false;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i == 0 && mat[i][j] == 0)
                row = true;

            if (j == 0 && mat[i][j] == 0)
                col = true;

            if (mat[i][j] == 0)
            {

                mat[0][j] = 0;
                mat[i][0] = 0;
            }
        }
    }
    for (int i = 1; i < R; i++)
        for (int j = 1; j < C; j++)
            if (mat[0][j] == 0 || mat[i][0] == 0)
                mat[i][j] = 0;
    if (row == true)
        for (int i = 0; i < C; i++)
            mat[0][i] = 0;
    if (col == true)
        for (int i = 0; i < R; i++)
            mat[i][0] = 0;
}