Brute force
1. Traverse in the matrix and if 0 comes.
2. then traverse its entire row and column and set it to -1.
3. Whenever there is -1, fill it with 0

Optimized
1.Take two dummy arrays with the size of row and column
2. If there is 0 then set the index of row and column vector to 0
3. then traverse in the matrix and set to 0

void setZeroes(vector<vector<int>> matrix)
{

    int rSize = matrix.size();
    int cSize = matrix[0].size();

    vector<int> row(rSize, -1);
    vector<int> col(cSize, -1);

    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
}