class Solution {
public:
    // Directly convert Celsius to Kelvin and Fahrenheit.
    vector<double> convertTemperature(double celsius) {
        return {celsius + 273.15, celsius * 1.80 + 32.00};
    }
};

// Time Complexity: O(1) - Performs a constant number of operations.
// Space Complexity: O(1) - Uses only a fixed-size vector.
    