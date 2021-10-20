class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        char sp= ' ';
        string r,res;
        res="";
        while(getline(str,r,sp)){
            reverse(r.begin(),r.end());
            res += r;
            res += sp;
        }
        res.pop_back();
        return res;
    }
};
