class Solution {
public:

    string encode(vector<string>& strs) {
    string enc;
    for(int i = 0; i < strs.size(); i++){
        string temp = strs[i];
        enc.append(to_string(temp.size()));
        enc.push_back('#');
        enc.append(temp);
    }
    return enc;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            int j = i ; 
            while(s[j] != '#'){
                j++;
             }
            int length = stoi(s.substr(i,j-i));
            i = j + 1;
            j = i + length;
            res.push_back(s.substr(i,length));
            i = j;
        }
        return res;
    }
};
