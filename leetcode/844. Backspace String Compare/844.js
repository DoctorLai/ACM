// https://helloacm.com/the-backspace-string-compare-algorithm/
// https://leetcode.com/problems/backspace-string-compare/

/**
 * @param {string} S
 * @param {string} T
 * @return {boolean}
 */
var backspaceCompare = function(S, T) {
    const build = (S) => {
        let st = [];        
        for (let i = 0, len = S.length; i < len; ++ i) {
            if (S[i] == '#') {
                st.pop();
            } else {
                st.push(S[i]);
            }
        }
        return st.join('');
    }
    return build(S) === build(T);
};
