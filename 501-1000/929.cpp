class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> addr;

        for (const auto& email : emails) {
            string local;
            for (char c : email) {
                if (c == '@' || c == '+') 
                    break;
                if (c != '.') 
                    local += c;
            }

            addr.insert(local + email.substr(email.find('@')));
        }

        return addr.size();
    }
};

// Time Complexity: O(n * m), where n is the number of emails and m is the max length of an email.
// Space Complexity: O(n) for storing unique email addresses.