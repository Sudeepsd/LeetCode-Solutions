class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end()); // Finds the maximum candy count
        vector<bool> result(candies.size());

        for (int i = 0; i < candies.size(); ++i) 
            result[i] = candies[i] + extraCandies >= mx; // Checks if the kid can have the max candies
        
        return result;
    }
};

// Time Complexity: O(n) - Finds max in O(n) and iterates once more  
// Space Complexity: O(n) - Stores the result for each kid  