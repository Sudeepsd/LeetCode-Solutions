class Solution {
public:
    int finalPositionOfSnake(int n, const vector<string>& commands) {
        int x = 0, y = 0;
        for (const auto& command : commands) {
            if (command == "LEFT") --x;
            else if (command == "RIGHT") ++x;
            else if (command == "UP") --y;
            else if (command == "DOWN") ++y;
        }

        return y * n + x;
    }
};
 
// Time Complexity: O(m) → Iterates through all commands once.  
// Space Complexity: O(1) → Uses only a few integer variables.  
