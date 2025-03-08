class Solution {
public:
    // Simulates a process where the two heaviest stones are smashed until one or none remains
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1) {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            if (a != b) pq.push(a - b);
        }

        return pq.empty() ? 0 : pq.top();
    }
};

// Time Complexity: O(n log n) - Each push and pop operation in a heap takes O(log n), done n times  
// Space Complexity: O(n) - Stores all stones in the priority queue  