//!   Brute Force

Approach: We can traverse through every element that is present in the matrix and return true if we found any element in the matrix is equal to the target integer. If the traversal is finished we can directly return false as we did not find any element in the matrix to be equal to the target integer.

Time complexity: O(m*n)

Space complexity: O(1)

//!   Using Binary Search

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i = 0 ; i < matrix.size() ; i++)
        {
            if( target <= matrix[i].back() && binary_search(matrix[i].begin(),matrix[i].end(),target) ) return true; 
            else continue ; 
        }
        
        return false ; 
    }