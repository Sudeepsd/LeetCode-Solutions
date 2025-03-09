class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        auto compare = [](pair<int, int> a, pair<int, int> b) {
            return a.first == b.first ? a.second > b.second : a.first > b.first;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> pq(compare);

        for (int i = 0; i < nums.size(); ++i) 
            pq.push({nums[i], i}); // Push all elements with their indices into a min-heap
        
        while (k--) {
            auto [num, idx] = pq.top();
            pq.pop();

            nums[idx] = num * multiplier; // Update the smallest element and reinsert it
            pq.push({num * multiplier, idx});
        }

        return nums;
    }
};

// Time Complexity: O(k log n) - Each update operation involves heap operations O(log n) done k times  
// Space Complexity: O(n) - Stores n elements in the priority queue  
