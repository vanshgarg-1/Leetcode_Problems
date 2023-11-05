class Solution {

    int index (string s, int i, int j){
        int n = s.length();
        int count =0;
        while(i>=0 && j<=n && s[i]==s[j]){
            i--;
            j++;
            count++;
        }
        return count;
    }
public:
    int countSubstrings(string s) {
        int count=0;
        int n = s.length();
        for(int i =0; i<n; i++){
            //odd
            int oddans = index(s,i,i);
            count=count + oddans;

            //even
            int evenans = index(s, i, i+1);
            count = count + evenans;
        }

        return count;
        
    }
};