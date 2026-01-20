string longestCommonPrefix(const vector<string>& strs) {
    if (strs.empty()) return "";
    int n = (int)strs.size();
    int minLen = INT_MAX;
    for (const string &s : strs) minLen = min(minLen, (int)s.size());
    if (minLen == 0) return ""; 

    string res;
    res.reserve(minLen);
    for (int i = 0; i < minLen; ++i) {
        char c = strs[0][i];
        for (int j = 1; j < n; ++j) {
            if (strs[j][i] != c) return res;
        }
        res.push_back(c);
    }
    return res;
}