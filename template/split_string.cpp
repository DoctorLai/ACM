// https://helloacm.com/how-to-split-a-string-in-c/

// split a string into vector <string>
vector<string> split(string path, char d) {
    vector<string> r;
    int j = 0;
    for (int i = 0; i < path.length(); i ++) {
        if (path[i] == d) {
            string cur = path.substr(j, i - j);
            if (cur.length()) {
                r.push_back(cur);
            }
            j = i + 1;
        }
    }
    if (j < path.length()) {
        r.push_back(path.substr(j));
    }
    return r;
}
    
// another implementation
vector<string> split(const string& text, char delimiter) {
    string tmp;
    vector<string> stk;
    stringstream ss(text);
    while(getline(ss,tmp, delimiter)) {
        stk.push_back(tmp);
    }
    return stk;
}    
