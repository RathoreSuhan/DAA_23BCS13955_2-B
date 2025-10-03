class Solution {
public:
    string removeKdigits(string s, int k) {
        string st = "";
        for(int i = 0; i < s.size(); i++) {
            while(st.size() != 0 && k > 0 && st.back() > s[i]) {
                st.pop_back();
                k--;
            }
            st.push_back(s[i]);
        }

        while(k > 0 && st.size() != 0) {
            st.pop_back();
            k--;
        }

        int i = 0;
        while(i < st.size() && st[i] == '0') {
            i++;
        }

        if(i == st.size()) {
            return "0";
        }

        return st.substr(i);
    }
};
