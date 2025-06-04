class Solution {
public:
vector<vector<string>> result;
bool parition(int start , int end , string& s){
    while(start <end){
        if(s[start] != s[end])return false;
        start++;
        end--;
    }
    return true;
}

void backtrack(string& s, int start , vector<string>& path){
    if(s.size() == start){
        result.push_back(path);
        return;
    }

    for(int end = start ; end < s.size() ; end++){
        if(parition(start,end,s)){
            path.push_back(s.substr(start, end - start + 1));
            backtrack(s, end+1,path);
            path.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>path;
        backtrack(s,0,path);
        return result;
    }
};