#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize < 1) return "";
    if (strsSize < 2) return strs[0];
    char* prefix = strdup(strs[0]);
    for (int i = 0; i < strlen(prefix); i++) {
        for (int j = 1; j < strsSize; j++) {
            if (prefix[i] != strs[j][i]) {
                prefix[i] = '\0';
                return prefix;
            }
        }
    }
    return prefix;
}

int main() {
    char* array[] = {"flower", "fly", "flow"};
    
    printf(longestCommonPrefix(array, 3));
}