class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e=s.size()-1;
        while(e>=st){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }
};