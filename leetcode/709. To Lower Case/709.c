// https://helloacm.com/c-c-coding-exercisse-how-to-implement-tolowercase-function/
// https://leetcode.com/problems/to-lower-case/description/

char* toLowerCase(char* str) {
    char* s = str;
    while (*str != '\0') { // not the end of the string
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        ++ str;
    }
    return s;
}
