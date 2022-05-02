

//!  Brute Force -> Using Set 
int solve(string str) {
  int maxans = INT_MIN;
  for (int i = 0; i < str.length(); i++) 
  {
    unordered_set < int > set;
    for (int j = i; j < str.length(); j++) 
    {
      if (set.find(str[j]) != set.end()) 
      {
        maxans = max(maxans, j - i);
        break;
      }
      set.insert(str[j]);
    }
  }
  return maxans;
}