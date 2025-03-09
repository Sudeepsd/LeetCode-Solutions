class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> wordIdx;

        for (int i = 0; i < words.size(); ++i) 
            if (words[i].find(x) != string::npos) 
                wordIdx.push_back(i); // Store indices of words containing x

        return wordIdx;
    }
};

// Time Complexity: O(n * m) - n is the number of words, m is the average word length (string::find takes O(m))  
// Space Complexity: O(n) - Stores indices of matching words in worst case  
