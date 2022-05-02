You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.

Return A and B.

Input:[3 1 2 5 3] 

Output:[3, 4] 


//!  Time-> O(n) Space -> O(n)
vector<int> repeatedNumber(const vector<int> &A) {

    vector<int> idx(A.size()+1,0) ; 
    vector<int> ans; 

    for(int i = 0 ; i < A.size() ; i++)
    {
        if(idx[A[i]] < 1) idx[A[i]]++ ; 
        else{
            ans.push_back(A[i]) ; 
        }
    }

    for(int i = 1 ; i < idx.size() ; i++)
    {
        if(idx[i] == 0)
        {
            ans.push_back(i) ; 
        }
    }
    return ans; 
}