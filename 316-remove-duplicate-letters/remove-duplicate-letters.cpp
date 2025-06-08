class Solution {

public:

string removeDuplicateLetters(string s) {

    vector<int> freq(26, 0);
    vector<bool> instack(26, false);
    stack<char> st;
    for(char c : s) {
        freq[c - 'a']++;
    }
    for(char c : s) {
        freq[c - 'a']--;
        if(instack[c - 'a']) continue;
        while(!st.empty() && c < st.top() && freq[st.top() - 'a'] > 0) {

        instack[st.top() - 'a'] = false;
        st.pop();

    }
    st.push(c);
    instack[c - 'a'] = true;
}



    string result;
    while(!st.empty()) {
    result += st.top(); 
    st.pop();
    }
    reverse(result.begin(), result.end());  
    return result;
    }

};


