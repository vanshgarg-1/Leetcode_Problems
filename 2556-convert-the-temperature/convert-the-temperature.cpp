class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k = celsius + 273.15;
        double f = 1.80 * celsius +32.00;

        vector<double> result;
        result.push_back(k);
        result.push_back(f);
        return result;
    }
};