// The time complexity is O(N) to O(N²). We scan the string O(N) times, but frequent replacements can cause O(N²) due to repeated memory allocations.
// The space complexity is O(N), as *regex_replace* creates a new string to store the modified output.
string defangIPaddr(string address) {
    /* 
    regex_replace(address, regex("[.]"), "[.]")
        address: The input string containing the IP address.
        regex("[.]"): A regular expression pattern that matches the dot (.).
            In regex, . is a special character that matches any character.
            To match a literal dot, you need to escape it using \[.\], but inside a C++ string, backslashes need to be escaped again, so "[.]" is used.
        "[.]": The replacement string. The function replaces every occurrence of . with "[.]"
    */
    return regex_replace(address, regex("[.]"), "[.]");
}

/* Alternate:
- Time Complexity: O(N²) in the worst case due to repeated string reallocations when appending `"[.]"`.  
- Space Complexity: O(N) for storing the modified string.
string defangIPaddr(string address) {
    string result;
    for (char c : address) {
        if (c == '.') 
            result += "[.]";
        else 
            result += c;
    }
    return result;
}
*/